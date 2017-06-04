package;

import flixel.math.FlxPoint;
class TileUtil {
    public static inline var TILE_SIZE:Int = 32;

    public static function coordinateToTile(loc:FlxPoint):FlxPoint {
        return new FlxPoint(loc.x / 32, loc.y / 32);
    }

    public static function pointToIndex(loc: FlxPoint, w:Int):Int {
        return cast(loc.y, Int) * w + cast(loc.x, Int);
    }

    public static function tileToCoordinate(loc:FlxPoint):FlxPoint {
        return new FlxPoint(loc.x * 32, loc.y * 32);
    }

    public static function getTileInDirection(loc:FlxPoint, dir:Direction):FlxPoint {
        return loc.addPoint(Directions.toMatrix(dir));
    }

}
