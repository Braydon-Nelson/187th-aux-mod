class CfgPatches
{
	class 187th_RTO_Vests
	{
		name = "187th RTO Vests";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"Aux187_RTO_Vest1",
			"Aux187_RTO_Vest2",
			"Aux187_RTO_Vest3",
			"Aux187_RTO_Vest4",
			"Aux187_RTO_Vest5"
		};
	};
};

class CfgWeapons
{
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class VestItem;
	
	class Aux187_RTO_Vest1: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Clone RTO Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "",
		   "187th-aux\Data\Vests\RTO\Clone_vest_rto_cpl.paa"
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
	
	class Aux187_RTO_Vest2: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Clone RTO Vest (CP)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "",
		   "187th-aux\Data\Vests\RTO\Clone_vest_rto_cpl.paa"
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
	
	class Aux187_RTO_Vest3: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Clone RTO Vest (CS)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\RTO\Clone_vest_rto_sgt.paa"
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
	class Aux187_RTO_Vest4: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone RTO Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\RTO\Clone_vest_rto_cpl.paa"
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
	class Aux187_RTO_Vest5: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone RTO Vest (CP)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\RTO\Clone_vest_rto_cpl.paa"
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