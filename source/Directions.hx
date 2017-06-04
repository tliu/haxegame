package;


import flixel.math.FlxPoint;
class Directions {
    private static var directionMatrix:Array<FlxPoint> = [
        new FlxPoint(-1, -1),     
        new FlxPoint( 0, -1),
        new FlxPoint( 1, -1),
        new FlxPoint(-1,  0),
        new FlxPoint( 0,  0),
        new FlxPoint( 1,  0),
        new FlxPoint(-1,  1),
        new FlxPoint( 0, -1),
        new FlxPoint( 1,  1)
    ];

    static function toInt(d: Direction): Int {
        return switch(d) {
            case NORTHWEST: 0; 
            case NORTH: 1;
            case NORTHEAST: 2;
            case WEST: 3;
            case EAST: 5;
            case SOUTHWEST: 6;
            case SOUTH: 7;
            case SOUTHEAST: 8;

        }
    }
    public static function toMatrix(d: Direction): FlxPoint {
        return directionMatrix[Directions.toInt(d)];
    }
}
