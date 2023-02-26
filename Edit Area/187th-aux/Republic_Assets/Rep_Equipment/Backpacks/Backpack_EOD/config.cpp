class CfgPatches
{
	class 187th_Backpack_EOD
	{
		name = "187th Backpack EOD";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Backpack_eod","Aux187_Backpack_eod_straps"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_eod;
	class 187_Clone_Backpack_eod: JLTS_Clone_backpack_eod
	{
		displayName = "[187th] Clone Backpack (EOD)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thBackpackEOD.paa"};
		maximumLoad = 475;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	
	class Aux187_Backpack_eod_straps : 187_Clone_Backpack_eod
	{
		displayName = "[187th] Strapped Backpack (EOD)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
};