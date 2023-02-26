class CfgPatches
{
	class 187th_Snow_Vest
	{
		name = "187th Snow Kama";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Vest_Snow","187_Clone_Vest_Snow_CPL"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestKama;
	class 187_Clone_Vest_Snow : JLTS_CloneVestKama
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayname = "[187th] Clone Snow Kama";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
	   hiddenSelections[] = {"camo1"};
	   class ItemInfo : VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1"};
	      mass = 80;
	   };
	};
	
	class JLTS_CloneVestReconOfficer;
	class 187_Clone_Vest_Snow_CPL : JLTS_CloneVestReconOfficer
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Snow Vest (CP)";
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
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
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