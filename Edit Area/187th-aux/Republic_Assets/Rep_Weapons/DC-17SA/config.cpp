class CfgPatches
{
	class Aux187th_DC17SA
	{
		name = "187th DC17SA";
		author = "MickeyD";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_DC17SA"};
	};
};

class CfgWeapons
{
	class WeaponSlotsInfo;
	class CowsSlot;
	class PointerSlot;	
	class optic_MRD_black;
	class InventoryOpticsItem_Base_F;
	class JLTS_DC17SA;
	
	class Aux187_DC17SA_Optic : optic_MRD_black
	{
		displayName="DC17SA MRD";
	};
	
	class Aux187_DC17SA: JLTS_DC17SA
	{
		displayName="[187th] DC-17SA";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_DC17SA";
		magazines[]=
		{
			"Aux187_DC17SA_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"Aux187_DC17SA_Optic"
				};
				iconPicture="";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JLTS_DC17SA_flashlight"
				};   
			};
		};
	};
};