package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxCamera;
import flixel.math.FlxPoint;

class Player extends TiledMovementSprite
{

    private var bindings:KeyBindings;
    private var playerNumber:PlayerNumber;
    public var cam:FlxCamera;
    public var cameraLocked:Bool;
    private static inline var SPEED:Int = 200;

    public function new(x:Int, y:Int, state:PlayState, bindings:KeyBindings, camera:FlxCamera, playerNumber:PlayerNumber) {
        if (x % 32 != 0) {
            x = Std.int(x / 32);
            x *= 32;
        }
        if (y % 32 != 0) {
            y = Std.int(y / 32);
            y *= 32;
        }
        super(x, y, state);
        this.bindings = bindings;
        this.cam = camera;
        this.playerNumber = playerNumber;
        this.cameraLocked = false;

        //TODO yolo
        if (playerNumber == PlayerNumber.ONE) {
            makeGraphic(32, 32, 0xffff0000);
        } else {
            makeGraphic(32, 32, 0xff0000ff);
        }
    }

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
        for (key in bindings.keyToControl.keys()) {
            if (FlxG.keys.anyPressed([key])) {
                executePressed(bindings.keyToControl[key]);
            }
            if (FlxG.keys.anyJustReleased([key])) {
                executeJustReleased(bindings.keyToControl[key]);
            }
        }
    }

    private function executePressed(control: ControlType):Void {
        trace(this.cam.scroll);
        switch (control) {
            case ControlType.UP:
                queueMovement(Direction.NORTH);
            case ControlType.DOWN:
                queueMovement(Direction.SOUTH);
            case ControlType.LEFT:
                queueMovement(Direction.WEST);
            case ControlType.RIGHT:
                queueMovement(Direction.EAST);
            default:
        }
    }
    private function executeJustReleased(control: ControlType):Void {
        switch (control) {
            case ControlType.INTERACT:
                if (this.cameraLocked) {
                    this.cam.follow(this); 
                } else {
                    this.cam.follow(null); 
                }
                this.cameraLocked = !this.cameraLocked;
            default:
                resetStepSize();
        }
    }
}

