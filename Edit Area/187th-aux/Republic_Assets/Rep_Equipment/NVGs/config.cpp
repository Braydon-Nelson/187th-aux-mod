class CfgPatches
{
	class 187th_NVGs
	{
		name = "187th NVGs";
		author = "Wilton and Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_NVG_Chip","187th_NVG_Chip_Pilot","187th_JLTS_CloneNVG","187th_JLTS_CloneNVGRange","187th_JLTS_CloneNVGDown","187th_NVG_Chip_Snow",};
	};
};

class CfgWeapons
{
	class JLTS_NVG_droid_chip_1;
	class 187th_NVG_Chip: JLTS_NVG_droid_chip_1
	{
		displayName = "[187th] NVG Chip";
		scope = 2;
		modelOptics = "";
		ace_nightvision_border = "";
	};
	class 187th_NVG_Chip_Pilot: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Pilot helm nvg";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
	};
	class 187th_NVG_Chip_Snow: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Snow helm nvg";
		visionMode[] = {"Normal","NVG"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
	};
	class 187th_NVG_Chip_Snow2: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Snow2 helm nvg";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
	};
	class JLTS_CloneNVG;
	class 187th_JLTS_CloneNVG: JLTS_CloneNVG
	{
		displayName = "[187th] NV Visor";
		scope = 2;
		modelOptics = "";
		ace_nightvision_border = "";
	};
	class JLTS_CloneNVG_spec;
	class 187th_JLTS_CloneNVGDown: JLTS_CloneNVG_spec
	{
		displayName = "[187th] NV Visor (Perm Down)";
		scope = 2;
		modelOptics = "";
		ace_nightvision_border = "";
	};
	class JLTS_CloneNVGRange;
	class 187th_JLTS_CloneNVGRange: JLTS_CloneNVGRange
	{
		displayName = "[187th] Rangefinder";
		scope = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\NVGs\187thRangefinder.paa"};
		modelOptics = "";
		ace_nightvision_border = "";
		class ItemInfo
		{
			type=616;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
			modelOff="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
};