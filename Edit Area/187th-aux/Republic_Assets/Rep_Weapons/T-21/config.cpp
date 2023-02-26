class CfgPatches
{
	class T21_187
	{
		name = "187th T-21";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_T21"};
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
	class JMSLLTE_T21BlasterRifle;
	class Aux187_T21: JMSLLTE_T21BlasterRifle
	{
		displayName="[187th] T-21";
		scope=2;
		modes[]=
		{
			"Single",
            "FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",
					0.39810699,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",
					0.39810699,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1.02,
					1800
				};
				begin4[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1.03,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",
					0.39810699,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",
					0.39810699,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1.02,
					1800
				};
				begin4[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"JMSLLTE_weapons\T21\t21.ogg",
					1,
					1.03,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.30;
		};
		class GunParticles{};
		magazines[]=
		{
			"Aux187_T21_mag"
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