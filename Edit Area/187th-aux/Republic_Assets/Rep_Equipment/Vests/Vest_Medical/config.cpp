class CfgPatches
{
	class 187th_Medic_Vests
	{
		name = "187th Medic Vests";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"Aux187_Medical_Vest1",
			"Aux187_Medical_Vest2",
			"Aux187_Medical_Vest3",
			"Aux187_Medical_Vest4",
			"Aux187_Medical_Vest5"
		};
	};
};

class CfgWeapons
{
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class VestItem;
	
	class Aux187_Medical_Vest1: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Clone Medic Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "",
		   "187th-aux\Data\Vests\Medical\Clone_vest_medic_cpl.paa"
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
	
	class Aux187_Medical_Vest2: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Clone Medic Vest (CP)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "",
		   "187th-aux\Data\Vests\Medical\Clone_vest_medic_cpl.paa"
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
	
	class Aux187_Medical_Vest3: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Clone Medic Vest (CS)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\Medical\Clone_vest_medic_sgt.paa"
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
	class Aux187_Medical_Vest4: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone Medic Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\Medical\Clone_vest_medic_cpl.paa"
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
	class Aux187_Medical_Vest5: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone Medic Vest (CP)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = 
	   {
		   "MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		   "187th-aux\Data\Vests\Medical\Clone_vest_medic_cpl.paa"
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