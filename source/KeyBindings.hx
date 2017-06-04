
package;

import flixel.input.keyboard.FlxKey;

class KeyBindings
{
    public var bindings:Map<ControlType, Array<FlxKey>>;
    public var keyToControl:Map<FlxKey, ControlType>;
    public function new() {
        bindings = new Map<ControlType, Array<FlxKey>>();
        keyToControl = new Map<FlxKey, ControlType>();
    }

    public function addKey(control:ControlType, key:FlxKey) {
        if (!bindings.exists(control)) {
            bindings[control] = new Array<FlxKey>();
        }
        keyToControl[key] = control;
        bindings[control].push(key);
    }

}

