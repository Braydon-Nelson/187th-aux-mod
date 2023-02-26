class CfgPatches
{
	class 187th_CGS_Vest
	{
		name = "187th CGS Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Vest_CGS"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestReconOfficer;
	class 187_Clone_Vest_CGS : JLTS_CloneVestReconOfficer
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (CGS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"187th-aux\Data\Vests\Clone_vest_heavy_gnrsgt.paa"
		};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass=80;
		};
	};
};