class CfgPatches
{
	class 187th_Backpack_Medic
	{
		name = "187th Backpack Medic";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = 
		{
			"187_Clone_Backpack_medic",
			"187_Clone_Radio_medic",
			"Aux187_Backpack_medic_straps",
			"Aux187_Backpack_medic_radio_straps"
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_medic;
	class 187_Clone_Backpack_medic: JLTS_Clone_backpack_medic
	{
		displayName = "[187th] Clone Backpack (Medic)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thBackpackMedic.paa"};
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	
	class JLTS_Clone_backpack_RTO;
	class 187_Clone_Radio_medic: JLTS_Clone_backpack_RTO
	{
		displayName = "[187th] Clone Radio Pack (Medic)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thBackpackMedic.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 280;
	};
	
	class Aux187_Backpack_medic_straps : 187_Clone_Backpack_medic
	{
		displayName = "[187th] Strapped Backpack (Medic)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
	
	class Aux187_Backpack_medic_radio_straps : 187_Clone_Radio_medic
	{
		displayName = "[187th] Strapped Radio Pack (Medic)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
	};
};