class CfgPatches
{
	class 187th_MTT
	{
		name = "187th MTT";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_MTT"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class Tank;
	class Tank_F: Tank
	{
		class Turrets;
	};
	class 3as_MTT_Base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret1;
			class MainTurret2;
		};
	};
	class 3as_MTT_01_Base: 3as_MTT_Base
	{
		class HitPoints;
		class Turrets: Turrets
		{
			class MainTurret1: MainTurret1
			{
				class HitPoints;
			};
			class MainTurret2: MainTurret2
			{
				class HitPoints;
			};
		};
	};
	class 3as_MTT: 3as_MTT_01_Base
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Turrets: Turrets
		{
			class MainTurret1: MainTurret1
			{
				class HitPoints: HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
			class MainTurret2: MainTurret2
			{
				class HitPoints: HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
	};
	class 187th_MTT: 3as_MTT
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Transport"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="MTT";
		hiddenSelectionsTextures[]={"3as\3as_mtt\data\mtt_main_blue_co.paa","3as\3as_mtt\data\mtt_rack_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
		armor=1000;
		armorStructural=6;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=10;
				passThrough=1;
				explosionShielding=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=4;
				passThrough=0.2;
				explosionShielding=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=2;
				passThrough=0;
				explosionShielding=1.4400001;
			};
			class HitRTrack: HitRTrack
			{
				armor=2;
				passThrough=0;
				explosionShielding=1.4400001;
			};
			class HitFuel: HitFuel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.60000002;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret1: MainTurret1
			{
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=60;
						passThrough=0;
						explosionShielding=0.30000001;
					};
					class HitGun: HitGun
					{
						armor=40;
						passThrough=0;
						explosionShielding=1;
					};
				};
			};
			class MainTurret2: MainTurret2
			{
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=60;
						passThrough=0;
						explosionShielding=0.30000001;
					};
					class HitGun: HitGun
					{
						armor=40;
						passThrough=0;
						explosionShielding=1;
					};
				};
			};
		};
	};
};