class CfgPatches
{
	class 187th_DC15AUGL
	{
		name = "187th DC-15A UGL";
		author = "Circles";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_DC15A_ugl_plastic","Aux187_DC15A_ugl_wood"};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class PointerSlot;
	class UGL_F;
	class JLTS_DC15A_ugl_plastic;
	class Aux187_DC15A_ugl_plastic: JLTS_DC15A_ugl_plastic
	{
		displayName="[187th] DC-15A UGL (plastic stock)";
		scope=2;
		magazines[]=
		{
			"Aux187_DC15A_mag"
		};
		modes[]=
		{
			"Single",
            "FullAuto"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};   
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	    class OpticsModes
	    {
	        class sight
	        {
	            opticsID = 1;
	            useModelOptics = 1;
	            opticsPPEffects[] = {""};
	            opticsDisablePeripherialVision = 0;
	            opticsZoomMin = 0.25;
	            opticsZoomMax = 0.5;
	            opticsZoomInit = 0.75;
	            discreteInitIndex = 0;
	            distanceZoomMin = 200;
	            distanceZoomMax = 200;
	            memoryPointCamera = "eye";
	            visionMode[] = {};
	            opticsFlare = "false";
	            cameraDir = "";
	        };
	        class scope: sight
	        {
	            opticsID = 2;
	            opticsZoomMin = 0.125;
	            opticsZoomMax = 0.125;
	            opticsZoomInit = 0.125;
	            distanceZoomMin = 300;
	            distanceZoomMax = 300;
	        };
	    };
	    class EGLM: UGL_F
	    {
	    	displayName="187th UGL";
	    	magazines[]=
	    	{
	    		"187th_HE_Grenade_Shell",
				"187th_AP_Grenade_Shell",
	    		"UGL_FlareWhite_F",
	    		"UGL_FlareGreen_F",
	    		"UGL_FlareRed_F",
	    		"UGL_FlareYellow_F",
	    		"UGL_FlareCIR_F",
	    		"1Rnd_Smoke_Grenade_shell",
	    		"1Rnd_SmokeRed_Grenade_shell",
	    		"1Rnd_SmokeGreen_Grenade_shell",
	    		"1Rnd_SmokeYellow_Grenade_shell",
	    		"1Rnd_SmokePurple_Grenade_shell",
	    		"1Rnd_SmokeBlue_Grenade_shell",
	    		"1Rnd_SmokeOrange_Grenade_shell",
	    		"3Rnd_HE_Grenade_shell",
	    		"3Rnd_UGL_FlareWhite_F",
	    		"3Rnd_UGL_FlareGreen_F",
	    		"3Rnd_UGL_FlareRed_F",
	    		"3Rnd_UGL_FlareYellow_F",
	    		"3Rnd_UGL_FlareCIR_F",
				"OPTRE_3Rnd_Smoke_Grenade_shell",
				"OPTRE_3Rnd_SmokeRed_Grenade_shell",
				"OPTRE_3Rnd_SmokeGreen_Grenade_shell",
				"OPTRE_3Rnd_SmokeYellow_Grenade_shell",
				"OPTRE_3Rnd_SmokePurple_Grenade_shell",
				"OPTRE_3Rnd_SmokeBlue_Grenade_shell",
				"OPTRE_3Rnd_SmokeOrange_Grenade_shell",
	    		"3Rnd_Smoke_Grenade_shell",
	    		"3Rnd_SmokeRed_Grenade_shell",
	    		"3Rnd_SmokeGreen_Grenade_shell",
	    		"3Rnd_SmokeYellow_Grenade_shell",
	    		"3Rnd_SmokePurple_Grenade_shell",
	    		"3Rnd_SmokeBlue_Grenade_shell",
	    		"3Rnd_SmokeOrange_Grenade_shell",
	    	};
	    	descriptionShort="187th UGL";
	    	useModelOptics=0;
	    	useExternalOptic=0;
	    	cameraDir="OP_look";
	    	discreteDistance[]={100,200,300,400};
	    	discreteDistanceCameraPoint[]=
	    	{
	    		"OP_eye",
	    		"OP_eye2",
	    		"OP_eye3",
	    		"OP_eye4"
	    	};
	    	discreteDistanceInitIndex=0;
	    	};
	};
	
	class JLTS_DC15A_ugl;
	class Aux187_DC15A_ugl_wood: JLTS_DC15A_ugl
	{
		displayName="[187th] DC-15A UGL (wood stock)";
		scope=2;
		magazines[]=
		{
			"Aux187_DC15A_mag"
		};
		modes[]=
		{
			"Single",
            "FullAuto"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};   
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	    class OpticsModes
	    {
	        class sight
	        {
	            opticsID = 1;
	            useModelOptics = 1;
	            opticsPPEffects[] = {""};
	            opticsDisablePeripherialVision = 0;
	            opticsZoomMin = 0.25;
	            opticsZoomMax = 0.5;
	            opticsZoomInit = 0.75;
	            discreteInitIndex = 0;
	            distanceZoomMin = 200;
	            distanceZoomMax = 200;
	            memoryPointCamera = "eye";
	            visionMode[] = {};
	            opticsFlare = "false";
	            cameraDir = "";
	        };
	        class scope: sight
	        {
	            opticsID = 2;
	            opticsZoomMin = 0.125;
	            opticsZoomMax = 0.125;
	            opticsZoomInit = 0.125;
	            distanceZoomMin = 300;
	            distanceZoomMax = 300;
	        };
	    };
	    class EGLM: UGL_F
	    {
	    	displayName="187th UGL";
	    	magazines[]=
	    	{
	    		"187th_HE_Grenade_Shell",
				"187th_AP_Grenade_Shell",
	    		"UGL_FlareWhite_F",
	    		"UGL_FlareGreen_F",
	    		"UGL_FlareRed_F",
	    		"UGL_FlareYellow_F",
	    		"UGL_FlareCIR_F",
	    		"1Rnd_Smoke_Grenade_shell",
	    		"1Rnd_SmokeRed_Grenade_shell",
	    		"1Rnd_SmokeGreen_Grenade_shell",
	    		"1Rnd_SmokeYellow_Grenade_shell",
	    		"1Rnd_SmokePurple_Grenade_shell",
	    		"1Rnd_SmokeBlue_Grenade_shell",
	    		"1Rnd_SmokeOrange_Grenade_shell",
	    		"3Rnd_HE_Grenade_shell",
	    		"3Rnd_UGL_FlareWhite_F",
	    		"3Rnd_UGL_FlareGreen_F",
	    		"3Rnd_UGL_FlareRed_F",
	    		"3Rnd_UGL_FlareYellow_F",
	    		"3Rnd_UGL_FlareCIR_F",
				"OPTRE_3Rnd_Smoke_Grenade_shell",
				"OPTRE_3Rnd_SmokeRed_Grenade_shell",
				"OPTRE_3Rnd_SmokeGreen_Grenade_shell",
				"OPTRE_3Rnd_SmokeYellow_Grenade_shell",
				"OPTRE_3Rnd_SmokePurple_Grenade_shell",
				"OPTRE_3Rnd_SmokeBlue_Grenade_shell",
				"OPTRE_3Rnd_SmokeOrange_Grenade_shell",
	    		"3Rnd_Smoke_Grenade_shell",
	    		"3Rnd_SmokeRed_Grenade_shell",
	    		"3Rnd_SmokeGreen_Grenade_shell",
	    		"3Rnd_SmokeYellow_Grenade_shell",
	    		"3Rnd_SmokePurple_Grenade_shell",
	    		"3Rnd_SmokeBlue_Grenade_shell",
	    		"3Rnd_SmokeOrange_Grenade_shell",
	    	};
	    	descriptionShort="187th UGL";
	    	useModelOptics=0;
	    	useExternalOptic=0;
	    	cameraDir="OP_look";
	    	discreteDistance[]={100,200,300,400};
	    	discreteDistanceCameraPoint[]=
	    	{
	    		"OP_eye",
	    		"OP_eye2",
	    		"OP_eye3",
	    		"OP_eye4"
	    	};
	    	discreteDistanceInitIndex=0;
	    	};
	};
};