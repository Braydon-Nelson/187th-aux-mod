class CfgPatches
{
	class 187th_Jumppack
	{
		name = "187th Backpack";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Jumppack","187_Clone_Jumppack_LR","187_Clone_Jumppack_EOD"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack;
	class 187_Clone_Jumppack: JLTS_Clone_backpack
	{
		scope=2;
		displayname="[187th] Clone Jumppack";
		maximumLoad=280;
		JLTS_isJumppack=0;
		RD501_jumppack_is_jumppack=0;
		NSM_jumppack_is_jumppack=0;
		tf_hasLRradio = 0;
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_mc_co.paa"
		};
		Aux327th_jumppack_is_jumppack=1;
		Aux327th_jumppack_spam_delay=1;
		Aux327th_jumppack_energy_capacity=100;
		Aux327th_jumppack_recharge=4;
		Aux327th_jumppack_jump_effect_script="Aux327th_jumppack_effect_fnc_jt_21";
		Aux327th_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		Aux327th_jumppack_sound_ignite[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21Start.ogg"
		};
		Aux327th_jumppack_sound_land[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21End.ogg"
		};
		Aux327th_jumppack_sound_idle[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21Idle.ogg"
		};
		Aux327th_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			},
			
			{
				"Emergency Jump",
				{70,40,70,0,1,0}
			}
		};
	};
	
	class 187_Clone_Jumppack_LR: JLTS_Clone_backpack
	{
		scope=2;
		displayname="[187th] Clone Jumppack (LR)";
		maximumLoad=280;
		JLTS_isJumppack=0;
		RD501_jumppack_is_jumppack=0;
		NSM_jumppack_is_jumppack=0;
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Backpacks\187th_Jumppack_LR.paa"
		};
		Aux327th_jumppack_is_jumppack=1;
		Aux327th_jumppack_spam_delay=1;
		Aux327th_jumppack_energy_capacity=100;
		Aux327th_jumppack_recharge=4;
		Aux327th_jumppack_jump_effect_script="Aux327th_jumppack_effect_fnc_jt_21";
		Aux327th_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		Aux327th_jumppack_sound_ignite[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21Start.ogg"
		};
		Aux327th_jumppack_sound_land[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21End.ogg"
		};
		Aux327th_jumppack_sound_idle[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21Idle.ogg"
		};
		Aux327th_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			},
			
			{
				"Emergency Jump",
				{70,40,70,0,1,0}
			}
		};
	};
	
	class 187_Clone_Jumppack_EOD: JLTS_Clone_backpack
	{
		scope=2;
		displayname="[187th] Clone Jumppack (EOD)";
		maximumLoad=475;
		JLTS_isJumppack=0;
		RD501_jumppack_is_jumppack=0;
		NSM_jumppack_is_jumppack=0;
		tf_hasLRradio = 0;
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Backpacks\187th_Jumppack_EOD.paa"
		};
		Aux327th_jumppack_is_jumppack=1;
		Aux327th_jumppack_spam_delay=1;
		Aux327th_jumppack_energy_capacity=100;
		Aux327th_jumppack_recharge=4;
		Aux327th_jumppack_jump_effect_script="Aux327th_jumppack_effect_fnc_jt_21";
		Aux327th_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		Aux327th_jumppack_sound_ignite[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21Start.ogg"
		};
		Aux327th_jumppack_sound_land[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21End.ogg"
		};
		Aux327th_jumppack_sound_idle[]=
		{
			"327th_jumppack\327th_Main\sounds\cdv21Idle.ogg"
		};
		Aux327th_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			},
			
			{
				"Emergency Jump",
				{70,40,70,0,1,0}
			}
		};
	};
};