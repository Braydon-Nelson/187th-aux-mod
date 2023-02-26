class CfgPatches
{
	class 187th_Recruit_Uniform
	{
		name = "187th Recruit Uniform";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"Aux187_Uniform_ARC"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_Clone_ARC"};
	};
};

class CfgVehicles
{
	class 187_Base_Uniform;
	class Aux187_Uniform_ARC: 187_Base_Uniform
	{
	    author = "PraetorPanda";
	    dlc = "187th Aux Mod";
	    scope = 1;
	    scopeCurator = 0;
	    uniformClass = "187th_Clone_Trooper";
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
	        "\187th-aux\Data\Uniforms\Clone_187thARC_armor.paa",
	        "\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
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
	class 187th_Clone_ARC : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Clone ARC Armor";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "Aux187_Uniform_ARC";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
};