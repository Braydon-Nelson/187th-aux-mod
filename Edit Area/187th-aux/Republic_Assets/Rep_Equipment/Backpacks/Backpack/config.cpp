class CfgPatches
{
	class 187th_Backpack
	{
		name = "187th Backpack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Backpack","Aux187_Backpack_straps"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack;
	class 187_Clone_Backpack: JLTS_Clone_backpack
	{
		displayName = "[187th] Clone Backpack";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thBackpack.paa"};
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	
	class Aux187_Backpack_straps : 187_Clone_Backpack
	{
		displayName = "[187th] Strapped Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
};