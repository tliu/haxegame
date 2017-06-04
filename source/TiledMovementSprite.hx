package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxPoint;

enum MoveState {
    MOVING;
    STOPPED;
}

class TiledMovementSprite extends FlxSprite {
    public var stepSize(default, set):Int;
    public var fasterStepSize:Int;
    function set_stepSize(size:Int):Int {
        if (TileUtil.TILE_SIZE % size != 0) {
            trace("Tile size was not a multiple of step size, leaving step size");
            return stepSize;
        } else {
            return stepSize = size;
        }
    }

    //TODO
    private static inline var NEXT_MOVE_TIMEOUT = 0.1;
    private static inline var SAME_DIR_SPEEDUP = 1;
    private var moveState:MoveState;
    private var moveDirection:Direction;
    private var stepTimer:Float;
    private var lastDirection:Direction;
    private var nextMove:Direction;
    private var nextMoveTimer:Float;
    private var stepFreq:Float;
    private var sameDirCounter:Int;
    private var origStepSize:Int;
    private var state:PlayState;
    public function new(x:Int, y:Int, state:PlayState, stepSize:Int = 2, stepFreq:Float = 0.01, fasterStepSize:Int = 4) {
        super(x, y);
        this.stepSize = stepSize;
        this.stepFreq = stepFreq;
        this.stepTimer = stepFreq;
        this.origStepSize = stepSize;
        this.sameDirCounter = 0;
        this.fasterStepSize = fasterStepSize;
        this.state = state;
    }

	override public function update(elapsed:Float):Void {
        super.update(elapsed);
        if (moveState == MoveState.MOVING) {
            if (stepTimer < 0) {
                switch(moveDirection) {
                    case NORTH:
                        this.y -= this.stepSize;
                    case SOUTH:
                        this.y += this.stepSize;
                    case WEST:
                        this.x -= this.stepSize;
                    case EAST:
                        this.x += this.stepSize;
                    default:
                }
                if (this.x % TileUtil.TILE_SIZE == 0 &&
                    this.y % TileUtil.TILE_SIZE == 0) {
                    this.moveState = MoveState.STOPPED;

                    if (lastDirection == moveDirection) {
                        sameDirCounter++;
                        if (sameDirCounter > SAME_DIR_SPEEDUP) {
                            stepSize = fasterStepSize;
                        }
                    } else {
                        sameDirCounter = 0;
                        stepSize = origStepSize;
                    }

                    lastDirection = moveDirection;
                    if (nextMoveTimer > 0 && 
                        nextMove != moveDirection &&
                        !Directions.opposite(moveDirection, nextMove)) {
                        queueMovement(nextMove);
                    }
                }
                
                stepTimer = stepFreq;
            }
            stepTimer -= elapsed;
            nextMoveTimer -= elapsed;
        } 
    }


    private function resetStepSize():Void {
        stepSize = origStepSize;
        sameDirCounter = 0;
    }
    private function queueMovement(dir:Direction) {
        if (this.moveState != MoveState.MOVING) {
            // check collision here
            var loc = TileUtil.coordinateToTile(new FlxPoint(x, y));
            var dest = TileUtil.getTileInDirection(loc, dir);
            var ind = TileUtil.pointToIndex(dest, state.level.width);
            if (state.level.collisionMap[ind] > 0) {
                return;
            }
            this.moveState = MoveState.MOVING;
            this.moveDirection = dir;
        } else {
            this.nextMove = dir;
            this.nextMoveTimer = NEXT_MOVE_TIMEOUT;
        }
    }

    
}
