package;

import flixel.math.FlxPoint;
class TileUtil {
    private static inline var TILE_SIZE:Int = 32;
    private static inline var TILE_MOVE_SPEED:Int = 100;

    public static function coordinateToTile(loc:FlxPoint):FlxPoint {
        return new FlxPoint(loc.x % 32, loc.y % 32);
    }

    public static function tileToCoordinate(loc:FlxPoint):FlxPoint {
        return new FlxPoint(loc.x * 32, loc.y * 32);
    }

    public static function getTileInDirection(loc:FlxPoint, dir:Direction):FlxPoint {
        return loc.addPoint(Directions.toMatrix(dir));
    }


}
