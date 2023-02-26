class CfgPatches
{
	class 187th_EOD_Vests
	{
		name = "187th EOD Vests";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"Aux187_EOD_Vest1",
			"Aux187_EOD_Vest2",
			"Aux187_EOD_Vest3",
			"Aux187_EOD_Vest4",
			"Aux187_EOD_Vest5",
			"Aux187_EOD_Vest6"
		};
	};
};

class CfgWeapons
{
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class VestItem;
	
	class Aux187_EOD_Vest1: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Clone EOD Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "",
		   "187th-aux\Data\Vests\EOD\Clone_vest_eod_cpl.paa"
	   };
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
	
	class Aux187_EOD_Vest2: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Clone EOD Vest (CP)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "",
		   "187th-aux\Data\Vests\EOD\Clone_vest_eod_cpl.paa"
	   };
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
	
	class Aux187_EOD_Vest3: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Clone EOD Vest (CS)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\EOD\Clone_vest_eod_sgt"
	   };
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
	class Aux187_EOD_Vest4: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone EOD Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\EOD\Clone_vest_eod_cpl"
	   };
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
	class Aux187_EOD_Vest5: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone EOD Vest (CP)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\EOD\Clone_vest_eod_cpl"
	   };
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
	class Aux187_EOD_Vest6: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Clone EOD Vest (CGS)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\EOD\Clone_vest_eod_cgs"
	   };
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		  vestType="Rebreather";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
};