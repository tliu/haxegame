package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxCamera;
import flixel.math.FlxPoint;

class PlayState extends FlxState
{
    public var level:TiledLevel;
    public var playerOne:FlxSprite;
    public var playerTwo:FlxSprite;
    public var cameraMap:Map<PlayerNumber, FlxCamera>;
	override public function create():Void
	{
		super.create();
        FlxG.camera.bgColor = 0xFF000000;
        FlxG.mouse.visible = false;
        var cameraOne:FlxCamera = new FlxCamera(0, 0, 512, 512);
        var cameraTwo:FlxCamera = new FlxCamera(544, 0, 512, 512);
        cameraOne.bgColor = 0xFF292634;
        cameraTwo.bgColor = 0xFF292634;
        this.cameraMap = new Map<PlayerNumber, FlxCamera>();
        this.cameraMap[PlayerNumber.ONE] = cameraOne;
        this.cameraMap[PlayerNumber.TWO] = cameraTwo;
        FlxG.cameras.add(cameraOne);
        FlxG.cameras.add(cameraTwo);
        level = new TiledLevel("assets/data/map.tmx", this);
        add(level.imagesLayer);
        add(level.foregroundTiles);
        add(level.backgroundLayer);
        add(level.objectsLayer);

        var text = new flixel.text.FlxText(0, 0, 0, "Hello world!", 32);
        text.screenCenter();
        //add(text);

	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
        
	}
}
