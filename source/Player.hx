package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxCamera;
import flixel.math.FlxPoint;

class Player extends FlxSprite
{

    private var bindings:KeyBindings;
    private var playerNumber:PlayerNumber;
    public var cam:FlxCamera;
    public var cameraLocked:Bool;
    private static inline var SPEED:Int = 200;

    public function new(x:Int, y:Int, bindings:KeyBindings, camera:FlxCamera, playerNumber:PlayerNumber) {
        if (x % 32 != 0) {
            x = Std.int(x / 32);
            x *= 32;
        }
        if (y % 32 != 0) {
            y = Std.int(y / 32);
            y *= 32;
        }
        super(x, y);
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
        this.velocity.x = 0;
        this.velocity.y = 0;
        for (key in bindings.keyToControl.keys()) {
            if (FlxG.keys.anyJustPressed([key])) {
                executeControl(bindings.keyToControl[key]);
            }
        }
    }

    private function executeControl(control: ControlType):Void {
        switch (control) {
            case ControlType.UP:
                this.velocity.y = -SPEED;
            case ControlType.DOWN:
                this.velocity.y = SPEED;
            case ControlType.LEFT:
                this.velocity.x = -SPEED;
            case ControlType.RIGHT:
                this.velocity.x = SPEED;
            case ControlType.INTERACT:
                trace("p" + this.playerNumber + ": " + this.cameraLocked);
                if (this.cameraLocked) {
                    this.cam.follow(this); 
                } else {
                    this.cam.follow(null); 
                }
                this.cameraLocked = !this.cameraLocked;
        }
    }
}

