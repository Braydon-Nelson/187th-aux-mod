class CfgPatches
{
	class 187th_Helmet_ARC
	{
		name = "187th Helmet ARC";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Helmet_ARC"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class JLTS_CloneHelmetP2_187;
	class 187_Clone_Helmet_ARC: JLTS_CloneHelmetP2_187
	{
		displayName = "[187th] Clone Trooper Helmet (ARC)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		weaponPoolAvailable = 1;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Helmets\187th_ARC_Helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
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