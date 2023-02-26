class CfgPatches
{
	class 187th_ARC_Vest
	{
		name = "187th ARC Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"187_Clone_Vest_ARC",
			"Aux187_Clone_Vest_ARC_TL",
		};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestARC;
	class 187_Clone_Vest_ARC : JLTS_CloneVestARC
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayname = "[187th] ARC Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
	   hiddenSelections[] = {"camo2"};
	   hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_arc_co.paa"};
	   class ItemInfo : VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1"};
	      mass = 80;
	   };
	};
	
	class Aux187_Clone_Vest_ARC_CS : 187_Clone_Vest_ARC
	{
		displayName = "[187th] ARC Vest (CS)";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Vests\Clone_vest_ARC_CS.paa"};
	};
	
	class Aux187_Clone_Vest_ARC_CGS : 187_Clone_Vest_ARC
	{
		displayName = "[187th] ARC Vest (CGS)";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Vests\Clone_vest_ARC_CGS.paa"};
	};
	
	class Aux187_Clone_Vest_ARC_CL : 187_Clone_Vest_ARC
	{
		displayName = "[187th] ARC Vest (CL)";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Vests\Clone_vest_ARC_CL.paa"};
	};
};