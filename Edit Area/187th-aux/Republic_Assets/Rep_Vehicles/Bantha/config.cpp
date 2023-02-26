class CfgPatches
{
	class 187th_IFV
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F"
		};
		units[]=
		{
			"Bantha_Mk2_187th"
		};
		weapons[]={};
		requiredVersion=0.1;
	};
};

class CfgVehicles
{
	class Wheeled_APC_F;
	class B_APC_Wheeled_01_base_F;
	class Turrets;
	class MainTurret;
	class APC_Wheeled_01_base_F;
	class HitPoints;
	class HitLFWheel;
	class HitLF2Wheel;
	class HitLMWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRF2Wheel;
	class HitRMWheel;
	class HitRBWheel;

	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel{};
			class HitLF2Wheel: HitLF2Wheel{};
			class HitLMWheel: HitLMWheel{};
			class HitLBWheel: HitLBWheel{};
			class HitRFWheel: HitRFWheel{};
			class HitRF2Wheel: HitRF2Wheel{};
			class HitRMWheel: HitRMWheel{};
			class HitRBWheel: HitRBWheel{};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
	};

	class Bantha_Mk2_187th: B_APC_Wheeled_01_cannon_F
	{
		displayName="Bantha MK2";
		author="Jay";
		forceInGarage=1;
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		crew="187th_Trooper_Crewman";
		tas_canBlift=2;
		tas_liftVars="[[[[0,-2.5,-4]],[[-1.55,-2.5,-3.5],[1.55,-2.5,-3.5]]], [0.4,-0.06], [0,0.3]]";
		thrustDelay=0.2;
		fuelCapacity=50;
		clutchStrength=65;
		enginePower=2000;
		peakTorque=6000;
		idleRpm=600;
		redRpm=4000;
		armor=900;
		armorStructural=6;
		armorLights=1;
		transportSoldier = 11;
		reportRemoteTargets = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"187th_J_Bantha_Cannon",
					"Bantha_Z6",
					"187th_Bantha_PLX"
				};
				magazines[]=
				{
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Bantha_Missile",
					"Aux187_Bantha_Missile",
					"Aux187_Bantha_Missile"
				};

			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				minimalHit=-0.045;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				minimalHit=-0.045;
			};
			class HitLMWheel: HitLMWheel
			{
				minimalHit=-0.045;
			};
			class HitLBWheel: HitLBWheel
			{
				minimalHit=-0.045;
			};
			class HitRFWheel: HitRFWheel
			{
				minimalHit=-0.045;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				minimalHit=-0.045;
			};
			class HitRMWheel: HitRMWheel
			{
				minimalHit=-0.045;
			};
			class HitRBWheel: HitRBWheel
			{
				minimalHit=-0.045;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=0;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=0;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=0;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=0;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=0;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
		};
		ace_cargo_space=6;
		ace_cargo_hasCargo=1;
		LESH_canTow=1;
		LESH_AxisOffsetTower[]={0,-6,1};
		ace_repair_canRepair=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Vehicles\Bantha_01_base_co.paa", 
			"\187th-aux\Data\Vehicles\Bantha_01_adds_co.paa", 
			"\187th-aux\Data\Vehicles\Bantha_01_tows_co.paa", 
			"\187th-aux\Data\Vehicles\camonet_snow_CO.paa", 
			"\187th-aux\Data\Vehicles\cage_snow_co.paa"
		};
	};
};

class CfgWeapons
{
	class autocannon_40mm_CTWS;
	class HE;
	class player;
	class Missiles_DAGR;
	class MGun;
	class 3AS_Sabre_Missiles;
	class Aux187_Z6;

	class 187th_Bantha_PLX: 3AS_Sabre_Missiles
	{
		displayName="Bantha Rocket Launcher";
		magazines[]=
		{
			"Aux187_Bantha_Missile"  
		};
		reloadTime=8.0;
		magazineReloadTime=10.0;
	};
	
	class Bantha_Z6: Aux187_Z6
	{
		displayName="Z6 Coax";
		magazines[]=
		{
			"Aux187_Z6_mag"  
		};
		cursor = "EmptyCursor";
		cursorAim = "mg";
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "MachineGunCloud";
            };
        };
	};
	
	class 187th_J_Bantha_Cannon: autocannon_40mm_CTWS
	{
		displayName="Z20 Cannon";
		scope=1;
		muzzles[]=
		{
			"187th_J_Plasma"
		};
		class 187th_J_Plasma: HE
		{
			displayName="Z20 Cannon";
			magazines[]=
			{
				"187th_J_3as_saber_80Rnd_autocannon_30mm_mag"
			};
			class player: player
			{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_lightwalkercanon_Shot_SoundSet",
						"Autocannon30mmBody_tail_SoundSet"
					};
				};
			};
			bullet1[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
				0.2818383,
				1,
				10
			};
			bullet2[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
				0.2818383,
				1,
				10
			};
			bullet3[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
				0.2818383,
				1,
				10
			};
			bullet4[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
				0.2818383,
				1,
				10
			};
			bullet5[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",
				0.2818383,
				1,
				10
			};
			bullet6[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",
				0.2818383,
				1,
				10
			};
			bullet7[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",
				0.2818383,
				1,
				10
			};
			bullet8[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",
				0.2818383,
				1,
				10
			};
			bullet9[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",
				0.2818383,
				1,
				10
			};
			bullet10[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",
				0.2818383,
				1,
				10
			};
			bullet11[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",
				0.2818383,
				1,
				10
			};
			bullet12[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",
				0.2818383,
				1,
				10
			};
			soundBullet[]=
			{
				"bullet1",
				0.079999998,
				"bullet2",
				0.083999999,
				"bullet3",
				0.083999999,
				"bullet4",
				0.083999999,
				"bullet5",
				0.093000002,
				"bullet6",
				0.093000002,
				"bullet7",
				0.074000001,
				"bullet8",
				0.074000001,
				"bullet9",
				0.083999999,
				"bullet10",
				0.085000001,
				"bullet11",
				0.082999997,
				"bullet12",
				0.082999997
			};
		};
	};
};

class CfgMagazines
{
	class 3as_saber_80Rnd_autocannon_30mm_mag;
	class 3AS_JLTS_MK43_AT;

	class 187th_J_3as_saber_80Rnd_autocannon_30mm_mag: 3as_saber_80Rnd_autocannon_30mm_mag
	{
		ammo="Aux187_Z20_green_tracers";
	};
	
	class Aux187_Bantha_Missile : 3AS_JLTS_MK43_AT
	{
		count=1;
	};
};