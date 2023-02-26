class CfgPatches
{
	class 187th_Helmet_Snow
	{
		name = "187th Helmets Snow";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Snow_Helmet","187_Snow_Helmet_Airborne"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class ls_gar_phase2Insulated_helmet;
	class 187_Snow_Helmet: ls_gar_phase2Insulated_helmet
	{
	   	author  = "PraetorPanda";
	   	dlc     = "187th Aux Mod";
	   	scope   = 2;
	   	scopeCurator = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		subItems[] = {"187th_NVG_Chip_Snow"};
		allowedFacewear[] = {};
	   	displayName = "[187th] Snow Trooper Helmet";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_Snow_Helmet.paa"};
	   	class ItemInfo : HeadgearItem
	   	{
	   		mass = 30;
	   		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
	   		hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_Snow_Helmet.paa"};
	   		modelSides[] = {3,1};
	   		class HitpointsProtectionInfo
	   		{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
	   	};
	};
	
	class 187_Snow_Helmet_Airborne: ls_gar_phase2Insulated_helmet
	{
	   	author  = "PraetorPanda";
	   	dlc     = "187th Aux Mod";
	   	scope   = 2;
	   	scopeCurator = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		subItems[] = {"187th_NVG_Chip_Snow2"};
		allowedFacewear[] = {};
	   	displayName = "[187th] Snow Trooper Helmet (Airborne)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_Snow_Airborne_Helmet.paa"};
	   	class ItemInfo : HeadgearItem
	   	{
	   		mass = 30;
	   		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
	   		hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_Snow_Airborne_Helmet.paa"};
	   		modelSides[] = {3,1};
	   		class HitpointsProtectionInfo
	   		{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
	   	};
	};
	
	class 187_Snow_Helmet_ARC: ls_gar_phase2Insulated_helmet
	{
	   	author  = "PraetorPanda";
	   	dlc     = "187th Aux Mod";
	   	scope   = 2;
	   	scopeCurator = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		subItems[] = {"187th_NVG_Chip_Snow2"};
		allowedFacewear[] = {};
	   	displayName = "[187th] Snow Trooper Helmet (ARC)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_Snow_ARC_Helmet.paa"};
	   	class ItemInfo : HeadgearItem
	   	{
	   		mass = 30;
	   		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
	   		hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_Snow_ARC_Helmet.paa"};
	   		modelSides[] = {3,1};
	   		class HitpointsProtectionInfo
	   		{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
	   	};
	};
};