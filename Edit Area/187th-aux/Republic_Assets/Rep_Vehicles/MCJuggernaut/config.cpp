class CfgPatches
{
	class 187th_JuggyMCC
	{
		name = "187th MCC Juggy";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"Aux187th_MCJuggernaut"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};
class RCWSOptics;
class Optics_Armored;
class EventHandlers;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class 3AS_Jug_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret1: NewTurret
			{
				class ViewGunner;
				class ViewOptics: RCWSOptics
				{};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{};
					class Medium: Medium
					{};
					class Narrow: Narrow
					{};
				};
				class HitPoints
				{
					class HitTurret
					{};
					class HitGun
					{};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{

						class Components
						{
							class EmptyDisplay
							{};
							class MinimapDisplay
							{};
							class VehicleDriverDisplay
							{};
							class VehicleMissileDisplay
							{};
							class SensorDisplay
							{};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components
						{
							class EmptyDisplay
							{};
							class MinimapDisplay
							{};
							class VehicleDriverDisplay
							{};
							class VehicleMissileDisplay
							{};
							class SensorDisplay
							{};
						};
					};
				};
			};
			class Backturret: MainTurret1
			{
				class ViewGunner;
				
				class Reflectors
				{
					class Right
					{
						class Attenuation
						{};
					};
				};
				class ViewOptics: RCWSOptics
				{};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{};
					class Medium: Medium
					{};
					class Narrow: Narrow
					{};
				};
				class HitPoints
				{
					class HitTurret
					{};
					class HitGun
					{};
				};
			};
			class Frontturret: NewTurret
			{
				class ViewGunner;
				class ViewOptics: RCWSOptics
				{};
			};
			class Missleturret: MainTurret1
			{
				class ViewGunner;
				class ViewOptics: RCWSOptics
				{};
			};
			class Cargoturret_01: NewTurret
			{
				class TurnIn;
			};
		};
		class UserActions
		{
			class Crow_nest_down;
			class Crow_nest_Up: Crow_nest_down
			{};
			class Close_rockets;
			class Open_rockets: Close_rockets
			{};
		};
	};
	class 3AS_B_Jug_01_base_F: 3AS_Jug_base_F
	{};
	class 3as_Jug: 3AS_B_Jug_01_base_F
	{
		class SimpleObject
		{};
		class Library
		{};
		class EventHandlers: EventHandlers
		{};
	};
	class Aux187th_MCJuggernaut : 3as_Jug
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="MC Juggernaut";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-3,-15.5]]], [0.5], [-1.7]]";
		hiddenSelectionsTextures[]={};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		ace_cargo_space = 200; // Cargo space your vehicle has
		artilleryScanner=1;
		ace_refuel_fuelCargo = 100000;
		ace_rearm_defaultSupply = 100000;
		ace_repair_canRepair = 1;
		weapons = ["TruckHorn3"];
		class Turrets: Turrets
		{
			class MainTurret2: MainTurret1
			{
				class ViewGunner;
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				gunnerAction="gunner_apcwheeled1_out";
				gunnerInAction="ATAP_Gunner";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerName="Arty Gunner";
				displayname="Arty Gunner";
				weapons[]=
				{
					"Aux187_Juggernaut_Arty"
				};
				magazines[]=
				{
					"Aux187_32Rnd_155mm_Mo_shells",
					"Aux187_16Rnd_155mm_Mo_smoke",
					"Aux187_24Rnd_arty_flare",
					"Aux187_6Rnd_155mm_Mo_guided",
					"Aux187_6Rnd_155mm_Mo_LG",
					"Aux187_12Rnd_155mm_Mo_mine",
					"Aux187_6Rnd_155mm_Mo_Cluster",
					"Aux187_12Rnd_155mm_Mo_AT_mine"
				};
				maxCamElev=84;
				maxelev=84;
				maxHorizontalRotSpeed=0.77999997;
				maxVerticalRotSpeed=0.25999999;
			};
			class Backturret1: Backturret
			{};
			class Frontturret1: Frontturret
			{};
			class Cargoturret_02: Cargoturret_01
			{};
		};
		class UserActions
		{
			class Crow_nest_down
			{
				displayName="Crows nest down";
				position="post_action";
				radius=10;
				onlyForPlayer=0;
				condition="this animationSourcePhase ""crownest"" == 5 AND (alive this)";
				statement="this animateSource [""crownest"",0]";
			};
			class Crow_nest_Up : Crow_nest_down
			{
				displayName="Crows nest up";
				condition="this animationSourcePhase ""crownest"" == 0  AND (alive this)";
				statement="this animateSource [""crownest"",5]";
			};
		};
	};
};

class CfgWeapons
{
	class mortar_155mm_AMOS;
	class Aux187_Juggernaut_Arty : mortar_155mm_AMOS
	{
		displayName = "Juggernaut Artillery";
		reload=5;
		magazines[]=
		{
			"Aux187_32Rnd_155mm_Mo_shells",
			"Aux187_16Rnd_155mm_Mo_smoke",
			"Aux187_24Rnd_arty_flare",
			"Aux187_6Rnd_155mm_Mo_guided",
			"Aux187_6Rnd_155mm_Mo_LG",
			"Aux187_12Rnd_155mm_Mo_mine",
			"Aux187_6Rnd_155mm_Mo_Cluster",
			"Aux187_12Rnd_155mm_Mo_AT_mine"
		};
	};
};

class CfgMagazines
{
	class 6Rnd_155mm_Mo_smoke;
	class 4Rnd_155mm_Mo_guided;
	class 2Rnd_155mm_Mo_LG;
	class 6Rnd_155mm_Mo_mine;
	class 2Rnd_155mm_Mo_Cluster;
	class 6Rnd_155mm_Mo_AT_mine;
	class 3AS_32Rnd_155mm_ATAP_Mortar_shells;

	class Aux187_24Rnd_arty_flare : 2Rnd_155mm_Mo_Cluster
	{
		displayName="Flares";
		displayNameMFDFormat="FLARE";
		displayNameShort="Flares";
		ammo="Aux187_Arty_Flares";
		count=24;
	};
	class Aux187_16Rnd_155mm_Mo_smoke : 6Rnd_155mm_Mo_smoke
	{
		count=16;
	};
	class Aux187_6Rnd_155mm_Mo_guided : 4Rnd_155mm_Mo_guided
	{
		count=6;
	};
	class Aux187_6Rnd_155mm_Mo_LG : 2Rnd_155mm_Mo_LG
	{
		count=6;
	};
	class Aux187_12Rnd_155mm_Mo_mine : 6Rnd_155mm_Mo_mine
	{
		count=12;
	};
	class Aux187_6Rnd_155mm_Mo_Cluster : 2Rnd_155mm_Mo_Cluster
	{
		count=6;
	};
	class Aux187_12Rnd_155mm_Mo_AT_mine : 6Rnd_155mm_Mo_AT_mine
	{
		count=12;
	};
	class Aux187_32Rnd_155mm_Mo_shells : 3AS_32Rnd_155mm_ATAP_Mortar_shells
	{
		displayName="155mm Plasma Shells";
	};
};

class CfgAmmo
{
	class Cluster_155mm_AMOS;
	class ACE_40mm_Flare_white;
	class Aux187_Arty_Flares : Cluster_155mm_AMOS
	{
		submunitionAmmo="Aux187_LongLasting_White_Flare";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
		airFriction = 0;
		triggerDistance = 570;
		submunitionConeAngle = 30;
		submunitionConeType[] = {"poissondisccenter",5};
	};
	class Aux187_LongLasting_White_Flare : ACE_40mm_Flare_white
	{
		timeToLive=80;
	};
};