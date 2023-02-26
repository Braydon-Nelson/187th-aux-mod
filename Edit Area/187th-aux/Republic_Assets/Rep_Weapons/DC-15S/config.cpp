class CfgPatches
{
	class DC15S_187
	{
		name = "187th DC-15S";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_DC15S"};
	};
};

class CfgWeapons
{
    class CowsSlot; 
    class MuzzleSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class WeaponSlotsInfo;
	class JLTS_DC15S;
	class Aux187_DC15S: JLTS_DC15S
	{
		displayName="[187th] DC-15S";
		scope=2;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15S\DC15S.p3d";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="JLTS_DC15S_187_Fried";
		JLTS_repairTime=20;
		magazines[]=
		{
			"Aux187_DC15S_mag"
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
           "3as_optic_reflex_dc15c"
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
    };
};