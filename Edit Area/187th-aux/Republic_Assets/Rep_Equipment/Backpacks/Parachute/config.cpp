// this is a simple copy/paste for the 187th mod devs to use. This only contains the basic needs of items, feel free to use the references below to learn more about each thing here.
// CfgWeapons reference - https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
// CfgCehicles reference - https://community.bistudio.com/wiki/CfgVehicles_Config_Reference

class CfgPatches
{
	class 187th_Parachute
	{
		name = "187th Parachute";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = 
		{
			"Aux187_Clone_Parachute",
			"Aux187_Radio_Parachute",
			"Aux187_Parachute_straps",
			"Aux187_Radio_Parachute_straps"
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack;
	class Aux187_Clone_Parachute: JLTS_Clone_backpack
	{
	  author = "PraetorPanda";
	  displayName = "[187th] Clone Parachute";
	  maximumLoad = 280;
	  mass = 50;
	  hiddenSelections[] = {"camo1"};
	  hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thParachute.paa"};
	  ls_loadout_shouldSaveContainer = 1;
	  ace_hasReserveParachute = 1;
	  ace_reserveParachute = "Aux187_Clone_Parachute";
	  backpackSimulation = "ParachuteSteerable";
	  ParachuteClass = "lsd_gar_hawkbatSteerable_parachute";
	};
	
	class JLTS_Clone_backpack_RTO;
	class Aux187_Radio_Parachute: JLTS_Clone_backpack_RTO {
	  author = "PraetorPanda";
	  displayName = "[187th] Clone Parachute (LR)";
	  tf_isolatedAmount = 0.65;
	  tf_encryptionCode = "tf_west_radio_code";
	  tf_dialog = "JLTS_clone_rto_radio_dialog";
	  tf_subtype = "digital_lr";
	  tf_range = 30000;
	  tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	  tf_hasLRradio = 1;
	  maximumLoad = 280;
	  mass = 50;
	  hiddenSelections[] = {"camo1"};
	  hiddenSelectionsTextures[]={"\187th-aux\Data\Backpacks\187thParachute.paa"};
	  ls_loadout_shouldSaveContainer = 1;
	  ace_hasReserveParachute = 1;
	  ace_reserveParachute = "Aux187_Radio_Parachute";
	  backpackSimulation = "ParachuteSteerable";
	  ParachuteClass = "lsd_gar_hawkbatSteerable_parachute";
	};
	
	class Aux187_Parachute_straps : Aux187_Clone_Parachute
	{
		displayName = "[187th] Strapped Parachute";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
	
	class Aux187_Radio_Parachute_straps : Aux187_Radio_Parachute
	{
		displayName = "[187th] Strapped Parachute (LR)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
	};
};