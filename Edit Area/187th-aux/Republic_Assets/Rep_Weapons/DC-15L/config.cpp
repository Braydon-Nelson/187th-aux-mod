class CfgPatches
{
	class 187th_DC15L
	{
		name = "187th DC-15L";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_DC15L"};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class PointerSlot;
	class CowsSlot;
	class UnderBarrelSlot;
	class JLTS_stun_muzzle;
	class 3AS_DC15L_F;
	class Aux187_DC15L: 3AS_DC15L_F
	{
		displayName="[187th] DC-15L";
		scope=2;
        scopeArsenal=2;
		magazines[]=
		{
			"Aux187_DC15L_mag"
		};
        class 187Stun: JLTS_stun_muzzle{};
        muzzles[]=
		{
			"this",
			"187Stun"
		};
        modes[]=
		{
            "FullAuto"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowSlot:CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3as_optic_dc15l"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};   
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					"bipod_01_f_blk"
				};  
			};
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
			reloadTime=0.1;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.0014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
		};
	};
};