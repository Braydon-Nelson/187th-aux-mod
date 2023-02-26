class CfgPatches
{
	class 187th_Radio_Pack
	{
		name = "187th Radio Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Radio_Pack","Aux187_Radio_Pack_straps"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_RTO;
	class 187_Radio_Pack: JLTS_Clone_backpack_RTO
	{
		displayName = "[187th] Clone Radio Pack";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thBackpack.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 280;
	};
	
	class Aux187_Radio_Pack_straps : 187_Radio_Pack
	{
		displayName = "[187th] Strapped Radio Pack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
	};
};