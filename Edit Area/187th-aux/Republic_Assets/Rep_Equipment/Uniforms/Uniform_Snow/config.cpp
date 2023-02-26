class CfgPatches
{
	class 187th_Snow_Uniforms
	{
		name = "187th Snow Uniforms";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_SnowArmor_Trooper","187th_SnowArmor_Lance","187th_SnowArmor_Medic","187th_SnowArmor_EOD","187th_SnowArmor_Airborne","187th_SnowArmor_Airborne_Medic","187th_SnowArmor_Airborne_EOD"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_Snow_Trooper","187th_Snow_Lance","187th_Snow_Medic","187th_Snow_EOD","187th_Snow_Airborne","187th_Snow_Airborne_Medic","187th_Snow_Airborne_EOD"};
	};
};

class CfgVehicles
{
	class 187_Base_Uniform;
	class 187th_SnowArmor_Trooper: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_Trooper";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Trooper_Top.paa",
			"\187th-aux\Data\Uniforms\SNOW_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_SnowArmor_Lance: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_Lance";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Trooper_Veteran.paa",
			"\187th-aux\Data\Uniforms\SNOW_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_SnowArmor_Medic: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_Medic";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Trooper_Medical.paa",
			"\187th-aux\Data\Uniforms\SNOW_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_SnowArmor_EOD: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_EOD";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Trooper_EOD.paa",
			"\187th-aux\Data\Uniforms\SNOW_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_SnowArmor_Airborne: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_Airborne";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Airborne_Trooper_Top.paa",
			"\187th-aux\Data\Uniforms\SNOW_Airborne_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_SnowArmor_Airborne_Medic: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_Airborne_Medic";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Airborne_Medical.paa",
			"\187th-aux\Data\Uniforms\SNOW_Airborne_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
	
	class 187th_SnowArmor_Airborne_EOD: 187_Base_Uniform {
        author = "PraetorPanda";
        dlc = "187th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "187th_Snow_Airborne_EOD";
        model = "\armor_unit\21\21.p3d";
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
            "Camo1",
			"Camo2",
			"CamoB"
        };
        hiddenSelectionsTextures[] = {
            "\187th-aux\Data\Uniforms\SNOW_Airborne_EOD.paa",
			"\187th-aux\Data\Uniforms\SNOW_Airborne_Trooper_Legs.paa",
			"armor_unit\21\21_Undersuit_co.paa"
        };
        editorSubcategory = "187_clones_white";
    };
};


class CfgWeapons
{
	class UniformItem;
	class JLTS_CloneArmor;
	class 187th_Snow_Trooper : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Trooper Armor";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_Trooper";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Snow_Lance : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Trooper Armor (CVT)";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_Lance";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Snow_Medic : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Trooper Armor (Medic)";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_Medic";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Snow_EOD : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Trooper Armor (EOD)";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_EOD";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Snow_Airborne : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Airborne Armor";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_Airborne";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Snow_Airborne_Medic : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Airborne Armor (Medic)";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_Airborne_Medic";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Snow_Airborne_EOD : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Snow Airborne Armor (EOD)";
		picture="armor_unit\21\ui\21_Armor.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "187th_SnowArmor_Airborne_EOD";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
};