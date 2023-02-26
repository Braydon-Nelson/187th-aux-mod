class CfgPatches
{
	class 187th_Aviation_Vests
	{
		name = "187th Aviation Vests";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"187_Clone_Vest_CPL_Aviation",
			"187_Clone_Vest_SGT_Aviation",
			"187_Clone_Vest_CGS_Aviation",
			"187_Clone_Vest_LT_Aviation",
			"187_Clone_Vest_Aircrew",
			"187_Clone_Vest_CPL_Aircrew",
			"187_Clone_Vest_SGT_Aircrew"
		};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestReconNCO;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class 187_Clone_Vest_CPL_Aviation : JLTS_CloneVestReconNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Clone Vest (CP)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo2"};
			mass = 80;
		};
	};
	
	class 187_Clone_Vest_SGT_Aviation : JLTS_CloneVestReconNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Clone Vest (CS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"187th-aux\Data\Vests\Clone_vest_heavy_sgt.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo2"};
			mass = 80;
		};
	};
	
	class 187_Clone_Vest_CGS_Aviation : JLTS_CloneVestReconNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Clone Vest (CGS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"187th-aux\Data\Vests\Clone_vest_heavy_gnrsgt.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo2"};
			mass = 80;
		};
	};
	
	class 187_Clone_Vest_CL_Aviation : JLTS_CloneVestLieutenant
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Clone Vest (CL)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Vests\Clone_vest_lt.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass = 80;
		};
	};
	
	class 187_Clone_Vest_Aircrew : JLTS_CloneVestAirborne
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Crew Vest";
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
	
	class 187_Clone_Vest_CPL_Aircrew : JLTS_CloneVestAirborneNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Crew Vest (CP)";
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
	
	class 187_Clone_Vest_SGT_Aircrew : JLTS_CloneVestAirborneNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aviation Crew Vest (CS)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"",
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
	
	/*class 187_Clone_Vest_CGS_Aircrew : JLTS_CloneVestAirborneNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Aircrew Clone Vest (CGS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"187th-aux\Data\Vests\Clone_vest_heavy_gnrsgt.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass = 80;
		};
	};*/
};