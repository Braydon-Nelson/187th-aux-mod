class CfgPatches
{
	class 187th_Glasses
	{
		name = "187th Glasses";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = 
		{
			"187th_RTO_Earmuffs",
			"187th_Beltpouch",
			"187th_Medpouch",
			"187th_NCOAntenna",
			"187th_NCOVisor",
			"187th_ClearView",
			"187th_CSMRangefinder",
			"187th_OfficerRangefinder",
			"187th_CommanderVisor",
			"187th_MCCommanderVisor"
		};
	};
};

class CfgGlasses
{
	class 187th_RTO_Earmuffs
	{
		displayName="[187th] RTO Headset";
		mode=4;
		identityTypes[]={};
		Scope=2;
		ScopeCurator=2;
		model="\187th-aux\Data\Glasses\RTO\Clone_RTO_EARS.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Glasses\RTO\textures\CAMO1_co.paa"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\clone_backpack_rto_ui_ca.paa";
	};
	class 187th_Beltpouch
	{
		displayName="[187th] Belt Pouch";
		mode=4;
		identityTypes[]={};
		model="\MRC\JLTS\characters\CloneArmor\clonebeltbag.p3d";
		Scope=2;
		ScopeCurator=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_belt_bag_co.paa"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\clone_belt_bag_ui_ca";
	};
	class 187th_Medpouch
	{
		displayName="[187th] Medical Pouch";
		mode=4;
		identityTypes[]={};
		model="\MRC\JLTS\characters\CloneArmor\clonebeltbag.p3d";
		Scope=2;
		ScopeCurator=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Glasses\Medic_Pouch\med_pouch.paa"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\clone_belt_bag_ui_ca";
	};
	class 187th_NCOAntenna
	{
		displayName="[187th] NCO Antenna";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_p2_comms.p3d";
		Scope=2;
		ScopeCurator=2;
	};
	class 187th_NCOVisor
	{
		displayName="[187th] NCO Visor";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa"};
		Scope=2;
		ScopeCurator=2;
	};
	class 187th_ClearView
	{
		displayName="[187th] Underwater Visor Overlay";
		mode=4;
		identityTypes[]={};
		picture="\SWLB_equipment\facewears\data\ui\icon_SWLB_clone_P2_HUD_ca.paa";
		model = "";
		Scope=2;
		ScopeCurator=2;
	};
	class 187th_CSMRangefinder
	{
		displayName="[187th] CSM Rangefinder";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		Scope=2;
		ScopeCurator=2;
	};
	class 187th_OfficerRangefinder
	{
		displayName="[187th] Officer Rangefinder";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\187th-aux\Data\NVGs\187thRangefinder.paa"};
		Scope=2;
		ScopeCurator=2;
	};
	class 187th_CommanderVisor
	{
		displayName="[187th] Commander Visor";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_cc_visor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa"};
		Scope=2;
		ScopeCurator=2;
	};
	class 187th_MCCommanderVisor
	{
		displayName="[187th] MC Commander Visor";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_mc_visor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa"};
		Scope=2;
		ScopeCurator=2;
	};
};