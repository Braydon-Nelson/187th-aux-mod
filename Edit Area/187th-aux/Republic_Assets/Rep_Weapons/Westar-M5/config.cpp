class CfgPatches
{
	class Westar_187
	{
		name = "187th Westar-M5";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_Westar"};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class CowsSlot; 
    class MuzzleSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class WeaponSlotsInfo;
	class JLTS_stun_muzzle;
	class 3AS_WestarM5_F;
	class 3AS_WestarM5_GL_F;
	class 3AS_WestarM5_GL;
	class Aux187_Westar: 3AS_WestarM5_F
	{
		displayName="[187th] Westar-M5";
		scope=2;
		magazines[]=
		{
			"Aux187_Westar_mag"
		};
		class 187Stun: JLTS_stun_muzzle{};
        muzzles[]=
		{
			"this",
			"187Stun"
		};
		class LinkedItems
		{
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
			mass=66;
			class CowSlot:CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3as_optic_scope_westarm5"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};  
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
				compatibleItems[]={};  
			};
        };
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
		};
    };
	
	/*class Aux187_WestarGL : 3AS_WestarM5_GL
	{
		displayName="[187th] Westar-M5GL";
		scope=2;
		muzzles[]=
		{
			"this",
			"Aux187_WestarGL_F"
		};
		magazines[]=
		{
			"Aux187_Westar_mag"
		};
		class LinkedItems
		{
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
			mass=66;
			class CowSlot:CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]={};
				
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};  
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
				compatibleItems[]={};  
			};
        };
		class Aux187_WestarGL_F : 3AS_WestarM5_GL_F
		{
			displayName = "187th UGL";
			magazines[] =
			{
				"187th_HE_Grenade_Shell",
				"187th_HEDP_Grenade_Shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
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
				"3Rnd_SmokeOrange_Grenade_shell"
			};
		};
	};*/
};