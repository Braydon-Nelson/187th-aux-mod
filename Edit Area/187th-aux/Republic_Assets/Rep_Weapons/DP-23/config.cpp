class CfgPatches
{
	class DP23_187
	{
		name = "187th DP-23";
		author = "MickeyD";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_DP23"};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class PointerSlot;
	class WeaponSlotsInfo;
	class JLTS_stun_muzzle;
	class JLTS_DP23;
	class Aux187_DP23: JLTS_DP23
	{
		displayName="[187th] DP-23";
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_ui_ca.paa";
		model="\MRC\JLTS\weapons\DP23\DP23.p3d";
		scope=2;
		scopeArsenal=2;
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="JLTS_DP23_fried";
		JLTS_repairTime=25;
		magazines[]=
		{
			"Aux187_DP23_mag",
			"Aux187_DP23_wide_mag"
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
		class 187Stun: JLTS_stun_muzzle{};
        muzzles[]=
		{
			"this",
			"187Stun"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
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
					"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",
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
			reloadTime=0.69999999;
			dispersion=4.4999999e-022;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=25;
		};
	};
};