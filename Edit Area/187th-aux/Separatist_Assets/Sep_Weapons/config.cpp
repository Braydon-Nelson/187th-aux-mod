class CfgPatches
{
	class 187th_CIS_Weapons
	{
		name = "187th CIS Weapons";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"Aux187_E5",
			"Aux187_RG4D",
			"Aux187_SBB3",
			"Aux187_E5S",
			"Aux187_DW32S_CIS",
			"Aux187_E5C",
			"Aux187_E5C_stock",
			"187th_WBK_B2_NormalMod",
			"187th_WBK_B2_GrenadeMod",
			"187th_WBK_B2_ShotgunMod",
			"187th_WBK_lightsaber_sith",
			"187th_WBK_Dutch_Vibro"
		};
	};
};

class CfgWeapons
{
	class JLTS_E5;
	class JLTS_RG4D;
	class JLTS_RPS6;
	class JLTS_SBB3;
	class JLTS_E5S;
	class JLTS_DW32S;
	class JLTS_E5C;
	class JLTS_E5C_stock;
	class WBK_B2_NormalMod;
	class WBK_B2_GrenadeMod;
	class WBK_B2_ShotgunMod;
	class WBK_lightsaber_sith;
	class WBK_Dutch_Vibro;
	class JLTS_DC15A_plastic;
	class JLTS_DC17SA;
	class JLTS_stun_muzzle;
	class JLTS_E5_shield;
	class WeaponSlotsInfo;
	class PointerSlot;

	class Aux187_E5: JLTS_E5
	{
		displayName="[187th CIS] E-5";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_E5";
		magazines[]=
		{
			"Aux187_E5_mag"
		};
		class Stun : JLTS_stun_muzzle{};
		muzzles[] = {"this","Stun"};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={acc_flashlight};   
			};
		};
	};

	class Aux187_RG4D: JLTS_RG4D
	{
		displayName="[187th CIS] RG-4D";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_RG4D";
		magazines[]=
		{
			"Aux187_RG4D_mag"
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={acc_flashlight};   
			};
		};
	};

	class Aux187_SBB3: JLTS_SBB3
	{
		displayName="[187th CIS] SB-B3";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_SBB3";
		magazines[]=
		{
			"Aux187_SBB3_mag"
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={acc_flashlight};   
			};
		};
	};

	class Aux187_E5S: JLTS_E5S
	{
		displayName="[187th CIS] E-5S";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_E5S";
		magazines[]=
		{
			"Aux187_E5S_mag"
		};
	  class LinkedItems
	  {
	  };
	};

	class Aux187_DW32S_CIS: JLTS_DW32S
	{
		displayName="[187th CIS] DW-32S";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_DW32S_CIS";
		magazines[]=
		{
			"Aux187_DW32S_mag_red"
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={acc_flashlight};   
			};
		};
	};
	
	class Aux187_E5C: JLTS_E5C
	{
		displayName="[187th CIS] E-5C";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_E5C";
		magazines[]=
		{
			"Aux187_E5C_mag"
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={acc_flashlight};   
			};
		};
	};

	class Aux187_E5C_stock: JLTS_E5C_stock
	{
		displayName="[187th CIS] E-5C (stock)";
		scope=2;
		scopeArsenal=2;
		baseweapon="Aux187_E5C_stock";
		magazines[]=
		{
			"Aux187_E5C_mag"
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={acc_flashlight};   
			};
		};
	};

	class 187th_WBK_B2_NormalMod: WBK_B2_NormalMod
	{
	  displayName="[187th CIS] B2 Battle Droid (Normal)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_B2_GrenadeMod: WBK_B2_GrenadeMod
	{
	  displayName="[187th CIS] B2 Battle Droid (GL)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_B2_ShotgunMod: WBK_B2_ShotgunMod
	{
	  displayName="[187th CIS] B2 Battle Droid (Shotgun)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_lightsaber_sith: WBK_lightsaber_sith
	{
	  displayName="Lightsaber (Sii-Taa) (Red)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_Dutch_Vibro: WBK_Dutch_Vibro
	{
	  displayName="[187th CIS] BX Commando Vibroblade";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	/*class 187th_JLTS_E5_shield: JLTS_E5_shield
	{
	    displayName = "[187th] E5 (Shield)"
	    scope = 1;
	    baseWeapon = "187th_JLTS_E5_shield";
	    class LinkedItems
	    {
	        class LinkedItemsUnder
	        {
	            slot = "UnderBarrelSlot";
	            item = "JLTS_riot_shield_droid_attachment";
	        };
	    };
	};*/
};