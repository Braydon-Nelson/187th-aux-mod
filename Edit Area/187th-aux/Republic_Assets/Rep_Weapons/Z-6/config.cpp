class CfgPatches
{
	class 187th_Z6_Cannon
	{
		name = "187th Z6 Rotary Cannon";
		author = "Circles";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_Z6"};
	};
};

class CfgWeapons
{
	class PointerSlot;
	class WeaponSlotsInfo;
	class JLTS_Z6;
	class Aux187_Z6: JLTS_Z6
	{
		displayName="[187th] Z6";
		scope = 2;
		baseweapon="Aux187_Z6";
		magazines[]=
		{
			"Aux187_Z6_mag",
			"Aux187_Z6_charged_mag"
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
	};
};