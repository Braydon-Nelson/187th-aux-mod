class CfgPatches
{
	class 187th_Helmet_Tanker
	{
		name = "187th Helmet Tanker";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Tanker_Helmet"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class 3as_Tanker_helmet;
	class 187_Tanker_Helmet : 3as_Tanker_helmet
	{
	   	author  = "PraetorPanda";
	   	dlc     = "187th Aux Mod";
	   	scope   = 2;
	   	scopeCurator = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		allowedFacewear[] = {};
	   	displayName = "[187th] Tanker Helmet";
	   	hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tanker.paa"};
	   	class ItemInfo : HeadgearItem
	   	{
	   		mass = 30;
	   		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_P2_Clone_Helm_Tanker.p3d";
	   		hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tanker.paa"};
	   		modelSides[] = {3,1};
	   		class HitpointsProtectionInfo
	   		{
	   			class Face
	   			{
	   				armor = 8;
	   				hitpointName = "HitFace";
	   				passThrough = 0.03;
	   			};
	   			class Head
	   			{
	   				armor = 8;
	   				hitPointName = "HitHead";
	   				passThrough = 0.03;
	   			};
	   			class Neck
	   			{
	   				armor = 8;
	   				hitpointName = "HitNeck";
	   				passThrough = 0.03;
	   			};
	   		};
	   	};
	};
};