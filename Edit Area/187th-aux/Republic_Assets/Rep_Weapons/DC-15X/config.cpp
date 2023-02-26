class CfgPatches
{
	class DC15X_187
	{
		name = "[187th] DC-15X";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_DC15X"};
	};
};

class CfgWeapons
{
	class WeaponSlotsInfo;
	class UnderBarrelSlot;
	class CowsSlot;
	class PointerSlot;	
	class JLTS_DC15X;
	class Aux187_DC15X: JLTS_DC15X
	{
		displayName="[187th] DC-15X";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "Aux187_DC15X";
		magazines[]=
		{
			"Aux187_DC15X_mag",
			"Aux187_DC15X_charge_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"JLTS_DC15X_scope",
					"3as_optic_reflex_dc15c"
				};
				iconPicture="";
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					"bipod_01_f_blk"
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
		};
	};
};