class CfgPatches
{
	class 187th_Airborne_Uniforms
	{
		name = "187th Airborne Uniforms";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_CloneArmor_Airborne","187th_CloneArmor_Airborne_Veteran","187th_CloneArmor_Airborne_EOD","187th_CloneArmor_Airborne_EOD_Veteran","187th_CloneArmor_Airborne_Medic","187th_CloneArmor_Airborne_Medic_Veteran"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_Clone_Airborne","187th_CloneArmor_Airborne_Veteran","187th_Clone_Airborne_EOD","187th_Clone_Airborne_EOD_Veteran","187th_Clone_Airborne_Medic","187th_Clone_Airborne_Medic_Veteran"};
	};
};

class CfgVehicles
{
	class 187_Base_Uniform;
	class 187th_CloneArmor_Airborne: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Clone_Airborne";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        weapons[] = {
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "Throw",
            "Put"
        };
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\Clone_187thAirborne_armor.paa",
            "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_CloneArmor_Airborne_Veteran: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Clone_Airborne_Veteran";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        weapons[] = {
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "Throw",
            "Put"
        };
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\Clone_187thAirborne_armor_veteran.paa",
            "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "187_clones_white";
    };

    class 187th_CloneArmor_Airborne_EOD: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Clone_Airborne_EOD";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        weapons[] = {
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "Throw",
            "Put"
        };
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\Clone_187thAirborne_EOD.paa",
            "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_CloneArmor_Airborne_EOD_Veteran: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Clone_Airborne_EOD_Veteran";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        weapons[] = {
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "Throw",
            "Put"
        };
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\Clone_187thAirborne_EOD_veteran.paa",
            "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "187_clones_white";
    };

    class 187th_CloneArmor_Airborne_Medic: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Clone_Airborne_Medic";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        weapons[] = {
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "Throw",
            "Put"
        };
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\Clone_187thAirborne_medic.paa",
            "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_CloneArmor_Airborne_Medic_Veteran: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Clone_Airborne_Medic_Veteran";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        weapons[] = {
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "Throw",
            "Put"
        };
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\Clone_187thAirborne_medic_veteran.paa",
            "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "187_clones_white";
    };
};

class CfgWeapons
{
	class UniformItem;
	class JLTS_CloneArmor;
	class 187th_Clone_Airborne : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Airborne Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_CloneArmor_Airborne";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Clone_Airborne_Veteran : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Airborne Vet Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_CloneArmor_Airborne_Veteran";
			containerClass  = "Supply150";
			mass = 40;
		};
	};

	class 187th_Clone_Airborne_EOD : JLTS_CloneArmor
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayName = "[187th] Clone Airborne Armor (EOD)";
	   picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	   class ItemInfo : UniformItem
	   {
	      uniformModel = "-";
		  uniformType = "Neopren";
	      uniformClass = "187th_CloneArmor_Airborne_EOD";
	      containerClass  = "Supply150";
	      mass = 40;
	   };
	};
	
	class 187th_Clone_Airborne_EOD_Veteran : JLTS_CloneArmor
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayName = "[187th] Clone Airborne Vet Armor (EOD)";
	   picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	   class ItemInfo : UniformItem
	   {
	      uniformModel = "-";
		  uniformType = "Neopren";
	      uniformClass = "187th_CloneArmor_Airborne_EOD_Veteran";
	      containerClass  = "Supply150";
	      mass = 40;
	   };
	};

	class 187th_Clone_Airborne_Medic : JLTS_CloneArmor
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayName = "[187th] Clone Airborne Armor (Medic)";
	   picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	   class ItemInfo : UniformItem
	   {
	      uniformModel = "-";
		  uniformType = "Neopren";
	      uniformClass = "187th_CloneArmor_Airborne_Medic";
	      containerClass  = "Supply150";
	      mass = 40;
	   };
	};
	
	class 187th_Clone_Airborne_Medic_Veteran : JLTS_CloneArmor
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayName = "[187th] Clone Airborne Vet Armor (Medic)";
	   picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	   class ItemInfo : UniformItem
	   {
	      uniformModel = "-";
		  uniformType = "Neopren";
	      uniformClass = "187th_CloneArmor_Airborne_Medic_Veteran";
	      containerClass  = "Supply150";
	      mass = 40;
	   };
	};
};