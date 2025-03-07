// Editor Modules
class GVAR(TaskArtillery) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskArtillery);
    scope = 2;
    displayName = CSTRING(Module_TaskArtillery_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleArtillery);
    icon = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\destroy_ca.paa";
    portrait = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\destroy_ca.paa";
    class Attributes: AttributesBase {
        class GVAR(Side) {
            displayName = CSTRING(Module_TaskArtillery_Side_DisplayName);
            tooltip = CSTRING(Module_TaskArtillery_Side_Tooltip);
            property = QGVAR(Side);
            defaultValue = 0;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
            control = QGVAR(Side);
            expression = "_this setVariable ['%s', _value, true];";
        };
        class GVAR(MainSalvo): EditShort {
            displayName = CSTRING(Module_TaskArtillery_MainSalvo_DisplayName);
            tooltip = CSTRING(Module_TaskArtillery_MainSalvo_Tooltip);
            property = QGVAR(MainSalvo);
            defaultValue = TASK_ARTILLERY_ROUNDS;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class GVAR(Spread): EditShort {
            displayName = CSTRING(Module_TaskArtillery_Spread_DisplayName);
            tooltip = CSTRING(Module_TaskArtillery_Spread_Tooltip);
            property = QGVAR(Spread);
            defaultValue = TASK_ARTILLERY_SPREAD;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class GVAR(SkipCheckRounds): Checkbox {
            displayName = CSTRING(Module_TaskArtillery_SkipCheckrounds_DisplayName);
            tooltip = CSTRING(Module_TaskArtillery_SkipCheckrounds_Tooltip);
            property = QGVAR(SkipCheckRounds);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_ARTILLERY_SKIPCHECKROUNDS);
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        description = CSTRING(Module_TaskArtillery_ModuleDescription);
    };
};

class GVAR(TaskArtilleryRegister) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskArtilleryRegister);
    scope = 2;
    displayName = CSTRING(Module_TaskArtilleryRegister_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleArtilleryRegister);
    icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\intel_ca.paa";
    portrait = "\A3\ui_f\data\igui\cfg\simpleTasks\types\intel_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {100, 100, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskArtilleryRegister_ModuleDescription);
    };
};

class GVAR(TaskAssault) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskAssault);
    scope = 2;
    displayName = CSTRING(Module_TaskAssault_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleAssault);
    icon = "\a3\ui_f\data\GUI\Cfg\CommunicationMenu\attack_ca.paa";
    portrait = "\a3\ui_f\data\GUI\Cfg\CommunicationMenu\attack_ca.paa";
    class Attributes: AttributesBase {
        class GVAR(IsRetreat): Checkbox {
            displayName = CSTRING(Module_TaskAssault_Retreating_DisplayName);
            tooltip = CSTRING(Module_TaskAssault_Retreating_Tooltip);
            property = QGVAR(IsRetreat);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QGVAR(TASK_ASSAULT_ISRETREAT);
        };
        class GVAR(DeleteOnStartUp): Checkbox {
            displayName = CSTRING(Module_TaskAssault_DeleteOnStartup_DisplayName);
            tooltip = CSTRING(Module_TaskAssault_DeleteOnStartup_Tooltip);
            property = QGVAR(DeleteOnStartUp);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_ASSAULT_DELETEONSTARTUP);
        };
        class GVAR(DistanceThreshold): EditShort {
            displayName = CSTRING(Module_TaskAssault_DistanceThreshold_DisplayName);
            tooltip = CSTRING(Module_TaskAssault_DistanceThreshold_Tooltip);
            property = QGVAR(DistanceThreshold);
            defaultValue = TASK_ASSAULT_DISTANCETHRESHOLD;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class GVAR(CycleTime): EditShort {
            displayName = CSTRING(Module_TaskAssault_CycleTime_DisplayName);
            tooltip = CSTRING(Module_TaskAssault_CycleTime_Tooltip);
            property = QGVAR(CycleTime);
            defaultValue = TASK_ASSAULT_CYCLETIME;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        description = CSTRING(Module_TaskAssault_ModuleDescription);
    };
};

class GVAR(TaskCamp) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskCamp);
    scope = 2;
    displayName = CSTRING(Module_TaskCamp_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleCamp);
    icon = "\a3\3DEN\Data\CfgWaypoints\Guard_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Guard_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_CAMP_SIZE, TASK_CAMP_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(ExitWP): Combo {
            displayName = CSTRING(Module_TaskCamp_ExitWP_DisplayName);
            tooltip = CSTRING(Module_TaskCamp_ExitWP_Tooltip);
            property = QGVAR(ExitWP);
            defaultValue = TASK_CAMP_EXITWP;
            unique = 0;
            condition = "0";
            typeName = "NUMBER";
            expression = "_this setVariable ['%s', _value, true];";
            class Values {
                class Random {
                    name = CSTRING(Random);
                    value = -1;
                };
                class Hold {
                    name = "$STR_ac_hold";
                    value = 0;
                };
                class Guard {
                    name = "$STR_ac_guard";
                    value = 1;
                };
                class SAD {
                    name = "$STR_ac_seekanddestroy";
                    value = 2;
                };
            };
        };
        class GVAR(Teleport): Checkbox {
            displayName = CSTRING(Module_TaskCamp_Teleport_DisplayName);
            tooltip = CSTRING(Module_TaskCamp_Teleport_Tooltip);
            property = QGVAR(Teleport);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_GARRISON_TELEPORT);
        };
        class GVAR(Patrol): Checkbox {
            displayName = CSTRING(Module_TaskGarrison_Patrol_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_Patrol_Tooltip);
            property = QGVAR(Patrol);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_GARRISON_PATROL);
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        position = 1;
        direction = 1;
        description = CSTRING(Module_TaskCamp_ModuleDescription);
    };
};

class GVAR(TaskCQB) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskCQB);
    scope = 2;
    displayName = CSTRING(Module_TaskCQB_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleCQB);
    icon = "\a3\3DEN\Data\CfgWaypoints\Scripted_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Scripted_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_CQB_SIZE, TASK_CQB_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(CycleTime): EditShort {
            displayName = CSTRING(Module_TaskCQB_CycleTime_DisplayName);
            tooltip = CSTRING(Module_TaskCQB_CycleTime_Tooltip);
            property = QGVAR(CycleTime);
            defaultValue = TASK_CQB_CYCLETIME;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class GVAR(DeleteOnStartUp): Checkbox {
            displayName = CSTRING(Module_TaskCQB_DeleteOnStartUp_DisplayName);
            tooltip = CSTRING(Module_TaskCQB_DeleteOnStartUp_Tooltip);
            property = QGVAR(DeleteOnStartUp);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_CQB_DELETEONSTARTUP);
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskCQB_ModuleDescription);
    };
};

class GVAR(TaskGarrison) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskGarrison);
    scope = 2;
    displayName = CSTRING(Module_TaskGarrison_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleGarrison);
    icon = "\a3\3DEN\Data\CfgWaypoints\Guard_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Guard_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_GARRISON_SIZE, TASK_GARRISON_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(ExitConditions): Combo {
            displayName = CSTRING(Module_TaskGarrison_ExitCondition_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_ExitCondition_Tooltip);
            property = QGVAR(ExitConditions);
            defaultValue = TASK_GARRISON_EXITCONDITIONS;
            unique = 0;
            condition = "0";
            typeName = "NUMBER";
            expression = "_this setVariable ['%s', _value, true];";
            class Values {
                class Random {
                    name = CSTRING(Random);
                    value = -2;
                };
                class All {
                    name = CSTRING(All);
                    value = -1;
                };
                class None {
                    name = CSTRING(None);
                    value = 0;
                };
                class Hit {
                    name = CSTRING(Hit);
                    value = 1;
                };
                class Fired {
                    name = CSTRING(Fired);
                    value = 2;
                };
                class FiredNear {
                    name = CSTRING(FiredNear);
                    value = 3;
                };
                class Suppressed {
                    name = CSTRING(Suppressed);
                    value = 4;
                };
            };
        };
        class GVAR(SortByHeight): Checkbox {
            displayName = CSTRING(Module_TaskGarrison_SortByHeight_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_SortByHeight_Tooltip);
            property = QGVAR(SortByHeight);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_GARRISON_SORTBYHEIGHT);
        };
        class GVAR(Teleport): Checkbox {
            displayName = CSTRING(Module_Teleport_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_Teleport_Tooltip);
            property = QGVAR(Teleport);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_GARRISON_TELEPORT);
        };
        class GVAR(Patrol): Checkbox {
            displayName = CSTRING(Module_TaskGarrison_Patrol_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_Patrol_Tooltip);
            property = QGVAR(Patrol);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_GARRISON_PATROL);
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskGarrison_ModuleDescription);
    };
};

class GVAR(TaskPatrol) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskPatrol);
    scope = 2;
    displayName = CSTRING(Module_TaskPatrol_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(modulePatrol);
    icon = "\A3\3DEN\Data\CfgWaypoints\Loiter_ca.paa";
    portrait = "\A3\3DEN\Data\CfgWaypoints\Loiter_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_PATROL_SIZE, TASK_PATROL_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(WaypointCount): EditShort {
            displayName = CSTRING(Module_TaskPatrol_Waypoints_DisplayName);
            tooltip = CSTRING(Module_TaskPatrol_Waypoints_Tooltip);
            property = QGVAR(WaypointCount);
            defaultValue = TASK_PATROL_WAYPOINTCOUNT;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class GVAR(MoveWaypoints): Checkbox {
            displayName = CSTRING(Module_TaskPatrol_MoveWaypoints_DisplayName);
            tooltip = CSTRING(Module_TaskPatrol_MoveWaypoints_Tooltip);
            property = QGVAR(moveWaypoints);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_PATROL_MOVEWAYPOINTS);
        };
        class GVAR(EnableReinforcement): Checkbox {
            displayName = CSTRING(Module_Task_EnableReinforcement_DisplayName);
            tooltip = CSTRING(Module_Task_EnableReinforcement_Tooltip);
            property = QGVAR(enableReinforcement);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_PATROL_ENABLEREINFORCEMENT);
        };

        class GVAR(Teleport): Checkbox {
            displayName = CSTRING(Module_Teleport_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_Teleport_Tooltip);
            property = QGVAR(teleport);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_PATROL_TELEPORT);
        };


        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskPatrol_ModuleDescription);
    };
};

class GVAR(TaskReset) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskReset);
    scope = 2;
    displayName = CSTRING(Module_TaskReset_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleReset);
    icon = "\A3\3DEN\Data\CfgWaypoints\Cycle_ca.paa";
    portrait = "\A3\3DEN\Data\CfgWaypoints\Cycle_ca.paa";
    class Attributes: AttributesBase {
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        description = CSTRING(Module_TaskReset_ModuleDescription);
    };
};

class GVAR(TaskDefend) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskDefend);
    scope = 2;
    displayName = CSTRING(Module_TaskDefend_DisplayName);
    category = "Lambs_Danger_WP_Cat";
    function = QFUNC(moduleDefend);
    icon = "\a3\3DEN\Data\CfgWaypoints\Hold_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Hold_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_DEFEND_SIZE, TASK_DEFEND_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(useCover): Combo {
            displayName = CSTRING(Module_TaskDefend_UseCover_DisplayName);
            tooltip = CSTRING(Module_TaskDefend_UseCover_Tooltip);
            property = QGVAR(useCover);
            defaultValue = TASK_DEFEND_USECOVER;
            unique = 0;
            condition = "0";
            typeName = "NUMBER";
            expression = "_this setVariable ['%s', _value, true];";
            class Values {
                class All {
                    name = CSTRING(All);
                    value = 0;
                };
                class Buildings {
                    name = CSTRING(Buildings);
                    value = 1;
                };
                class Walls {
                    name = CSTRING(Walls);
                    value = 2;
                };
                class Vegetation {
                    name = CSTRING(Vegetation);
                    value = 3;
                };
                class BuildingsAndVegetation {
                    name = CSTRING(BuildingsAndVegetation);
                    value = 4;
                };
                class BuildingsAndWalls {
                    name = CSTRING(BuildingsAndWalls);
                    value = 5;
                };
                class WallsandVegetation {
                    name = CSTRING(WallsandVegetation);
                    value = 6;
                };
            };
        };
        class GVAR(stealth): Checkbox {
            displayName = CSTRING(Module_TaskDefend_Stealth_DisplayName);
            tooltip = CSTRING(Module_TaskDefend_Stealth_Tooltip);
            property = QGVAR(stealth);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_DEFEND_STEALTH);
        };
        class GVAR(Teleport): Checkbox {
            displayName = CSTRING(Module_Teleport_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_Teleport_Tooltip);
            property = QGVAR(Teleport);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_DEFEND_TELEPORT);
        };
        class GVAR(Patrol): Checkbox {
            displayName = CSTRING(Module_TaskGarrison_Patrol_DisplayName);
            tooltip = CSTRING(Module_TaskGarrison_Patrol_Tooltip);
            property = QGVAR(Patrol);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_DEFEND_PATROL);
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskDefend_ModuleDescription);
    };
};

// Search Modules
class GVAR(TaskCreep) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskCreep);
    scope = 2;
    displayName = CSTRING(Module_TaskCreep_DisplayName);
    category = "Lambs_Danger_WP_Search_Cat";
    function = QFUNC(moduleCreep);
    icon = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_CREEP_SIZE, TASK_CREEP_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(MovingCenter): Checkbox {
            displayName = CSTRING(Module_TaskCreep_MovingCenter_DisplayName);
            tooltip = CSTRING(Module_TaskCreep_MovingCenter_Tooltip);
            property = QGVAR(MovingCenter);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_CREEP_MOVINGCENTER);
        };
        class GVAR(PlayersOnly): Checkbox {
            displayName = CSTRING(Module_TaskCreep_PlayersOnly_DisplayName);
            tooltip = CSTRING(Module_TaskCreep_PlayersOnly_ToolTip);
            property = QGVAR(PlayersOnly);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_CREEP_PLAYERSONLY);
        };
        class GVAR(CycleTime): EditShort {
            displayName = CSTRING(Module_TaskCreep_CycleTime_DisplayName);
            tooltip = CSTRING(Module_TaskCreep_CycleTime_Tooltip);
            property = QGVAR(CycleTime);
            defaultValue = TASK_CREEP_CYCLETIME;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskCreep_ModuleDescription);
    };
};

class GVAR(TaskHunt) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskHunt);
    scope = 2;
    displayName = CSTRING(Module_TaskHunt_DisplayName);
    category = "Lambs_Danger_WP_Search_Cat";
    function = QFUNC(moduleHunt);
    icon = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_HUNT_SIZE, TASK_HUNT_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(MovingCenter): Checkbox {
            displayName = CSTRING(Module_TaskHunt_MovingCenter_DisplayName);
            tooltip = CSTRING(Module_TaskHunt_MovingCenter_ToolTip);
            property = QGVAR(MovingCenter);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_HUNT_MOVINGCENTER);
        };
        class GVAR(PlayersOnly): Checkbox {
            displayName = CSTRING(Module_TaskHunt_PlayersOnly_DisplayName);
            tooltip = CSTRING(Module_TaskHunt_PlayersOnly_ToolTip);
            property = QGVAR(PlayersOnly);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_HUNT_PLAYERSONLY);
        };
        class GVAR(CycleTime): EditShort {
            displayName = CSTRING(Module_TaskHunt_CycleTime_DisplayName);
            tooltip = CSTRING(Module_TaskHunt_CycleTime_ToolTip);
            property = QGVAR(CycleTime);
            defaultValue = TASK_HUNT_CYCLETIME;
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class GVAR(EnableReinforcement): Checkbox {
            displayName = CSTRING(Module_Task_EnableReinforcement_DisplayName);
            tooltip = CSTRING(Module_Task_EnableReinforcement_Tooltip);
            property = QGVAR(enableReinforcement);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_HUNT_ENABLEREINFORCEMENT);
        };
        class GVAR(doUGL): Combo {
            displayName = CSTRING(Module_TaskHunt_TryUGLFlare_DisplayName);
            tooltip = CSTRING(Module_TaskHunt_TryUGLFlare_Tooltip);
            property = QGVAR(doUGL);
            defaultValue = TASK_HUNT_TRYUGLFLARE;
            unique = 0;
            condition = "0";
            typeName = "NUMBER";
            expression = "_this setVariable ['%s', _value, true];";
            class Values {
                class Disabled {
                    name = "$STR_disabled";
                    value = 0;
                };
                class Enabled {
                    name = "$STR_enabled";
                    value = 1;
                };
                class OnlyIfUGL {
                    name = CSTRING(OnlyIfUGL);
                    value = 2;
                };
            };
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskHunt_ModuleDescription);
    };
};

class GVAR(TaskRush) : GVAR(BaseModule) {
    _generalMacro = QGVAR(TaskRush);
    scope = 2;
    displayName = CSTRING(Module_TaskRush_DisplayName);
    category = "Lambs_Danger_WP_Search_Cat";
    function = QFUNC(moduleRush);
    icon = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
    portrait = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
    canSetArea = 1;
    canSetAreaShape = 1;
    class AttributeValues {
        size3[] = {TASK_RUSH_SIZE, TASK_RUSH_SIZE, -1};
        isRectangle = 0;
    };
    class Attributes: AttributesBase {
        class GVAR(MovingCenter): Checkbox {
            displayName = CSTRING(Module_TaskRush_MovingCenter_DisplayName);
            tooltip = CSTRING(Module_TaskRush_MovingCenter_ToolTip);
            property = QGVAR(MovingCenter);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_RUSH_MOVINGCENTER);
        };
        class GVAR(PlayersOnly): Checkbox {
            displayName = CSTRING(Module_TaskRush_PlayersOnly_DisplayName);
            tooltip = CSTRING(Module_TaskRush_PlayersOnly_ToolTip);
            property = QGVAR(PlayersOnly);
            unique = 0;
            validate = "none";
            condition = "0";
            typeName = "BOOL";
            defaultValue = QUOTE(TASK_RUSH_PLAYERSONLY);
        };
        class GVAR(CycleTime): EditShort {
            displayName = CSTRING(Module_TaskRush_CycleTime_DisplayName);
            tooltip = CSTRING(Module_TaskRush_CycleTime_ToolTip);
            property = QGVAR(CycleTime);
            defaultValue = QUOTE(TASK_RUSH_CYCLETIME);
            unique = 0;
            validate = "number";
            condition = "0";
            typeName = "NUMBER";
        };
        class ModuleDescription: ModuleDescription {};
    };
    class ModuleDescription: ModuleDescription {
        duplicate = 1;
        direction = 1;
        description = CSTRING(Module_TaskRush_ModuleDescription);
    };
};
