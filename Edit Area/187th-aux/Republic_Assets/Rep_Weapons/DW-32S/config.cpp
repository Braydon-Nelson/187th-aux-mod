class Cfgpatches
{
 class 187th_DW32S
 {
  name="187th DW-32S";
  author="MickeyD";
  requiredAddons[]={};
  units[]={};
  weapons[]={"Aux187_DW32S"};
 };
};
class CfgWeapons
{
	class PointerSlot;
	class WeaponSlotsInfo;
	class JLTS_DW32S;
	class Aux187_DW32S: JLTS_DW32S
	{
		displayName="[187th] DW-32S";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"Aux187_DW32S_mag"
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