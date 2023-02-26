class CfgPatches
{
	class Valken_187
	{
		name = "187th Valken-38X";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_Valken"};
	};
};

class CfgWeapons
{
    class CowsSlot; 
    class MuzzleSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class WeaponSlotsInfo;
	class JLTS_stun_muzzle;
	class 3AS_Valken38X_F;
	class Aux187_Valken: 3AS_Valken38X_F
	{
		displayName="[187th] Valken-38X";
		scope=2;
		magazines[]=
		{
			"Aux187_Valken_mag"
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
					"3as_optic_vk38x"
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
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					"bipod_01_f_blk"
				};  
			};
        };
    };
};