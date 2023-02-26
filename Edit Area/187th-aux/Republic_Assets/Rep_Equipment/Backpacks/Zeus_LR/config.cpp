class CfgPatches
{
	class 187th_Zeus_Radio_Pack
	{
		name = "187th Zeus Radio Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Zeus_LR"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_RTO;
	class 187_Zeus_LR: JLTS_Clone_backpack_RTO
	{
		displayName = "[187th] Clone Zeus LR";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thBackpack.paa"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 100000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 500;
	};
	
	class Aux187_Zeur_LR_straps : 187_Zeus_LR
	{
		displayName = "[187th] Strapped Zeus LR";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
	};
};