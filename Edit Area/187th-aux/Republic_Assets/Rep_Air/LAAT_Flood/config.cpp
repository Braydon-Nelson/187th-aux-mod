class CfgPatches
{
	class 187th_LAAT_Floodlights
	{
		name = "187th LAAT Floodlight";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_LAAT_Floodlights"};
		weapons[] = {};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
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

class CfgVehicles
{
	class 3as_laat_Base;
	class 3as_LAAT_Mk2Lights : 3as_laat_Base
	{
		class ACE_SelfActions;
	};
	class 187th_LAAT_Floodlights : 3as_LAAT_Mk2Lights
	{
		displayname="LAAT (Floodlights)";
		faction="187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Helicopter";
		armor=800;
		fuelCapacity=4000;
		scope=2;
		scopeCurator = 2;
		side=1;
		maximumLoad = 10000;
		crew="187th_Pilot";
		weapons[]=
		{
			"ParticleBeamCannon_F",
			"3as_LAAT_Missile_AGM",
			"3as_LAAT_Missile_AA",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laser_Battery",
			"3as_LAAT_8Rnd_Missile_AGM",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		tcw_emp_protection = 1;
		tcw_can_use_afterburner = 1;
		tcw_afterburner_max_boost_speed = 650;
		tcw_afterburner_min_boost_speed = 20;
		tcw_afterburner_min_brake_speed = 20;
		tcw_afterburner_increment = 10;
		tcw_afterburner_fuel_drag = 2000;
		tcw_afterburner_fuel_multi = 4;
		tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1000;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1000;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1200;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Medium : Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(15 / 120)";
					minFov = "(15 / 120)";
					maxFov = "(15 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(3.75 / 120)";
					minFov = "(3.75 / 120)";
					maxFov = "(3.75 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -120;
			maxTurn = 120;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "(this animationphase 'ramp' ==0) AND (player == driver this)";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1 AND (player == driver this)";
				statement = "this animateSource ['ramp',0,1];";
				onlyforplayer = 0;
			};
			class afterburners_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
	            shortcut = "User13";
				onlyforplayer = 0;
				condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
			};
			class afterburners_turn_off
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Deactivate Impulse";
				position = "pilotview";
				radius = 6;
	            shortcut = "User14";
				onlyforplayer = 0;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
			};
		};
		class EventHandlers
		{
			init = "(_this select 0) execVM '\187th-aux\Functions\loadSupply\fn_masterLoader.sqf';";
			fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
		class ACE_SelfActions : ACE_SelfActions
		{
			class 187th_LAAT_Skins
			{
				displayName = "Change LAAT Skin";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
				
				class Skin_Plain
				{
					displayName = "Plain";
					statement = "(vehicle player) setObjectTextureGlobal [0,'3AS\3as_Laat\LAATI\data\Hull_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Droid_Hunter
				{
					displayName = "Droid Hunter";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\Hull_Droid_Hunter.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_ARC_Trooper
				{
					displayName = "ARC Trooper";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_187_ARC.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Nexu
				{
					displayName = "Nexu";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_BEAST.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Victory
				{
					displayName = "Victory";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_CLONE_GRAB.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Kaminoan
				{
					displayName = "Kaminoan";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_KAMINOAN.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Dooku_Kick
				{
					displayName = "Dooku Kick";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_KICK_DOOKU.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Krelled
				{
					displayName = "Krelled";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_KRELLED.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Mace_Pose
				{
					displayName = "Mace Posed";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_MACE_POSE.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Mace_Punch
				{
					displayName = "Mace Punch";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_MACE_PUNCH.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Plos_Bros
				{
					displayName = "Plos Bros";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_PLOKOON.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Twilek_Dancer
				{
					displayName = "Twilek Dancer";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_PURPLE_TWILEK.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Rancor
				{
					displayName = "Rancor";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_RANCOR.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Helmet
				{
					displayName = "Helmet";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_SKULL_HELMET.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Twilek_Pose
				{
					displayName = "Twilek Pose";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_TWILEK_STAND.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
				class Skin_Custom_Freezy
				{
					displayName = "Custom (Freezy)";
					statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\Hull_Freezy_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
				};
			};
			class TFAR_IntercomChannel 
			{
				displayName = "Intercom Channel"; 
				condition = "true"; 
				statement = ""; 
				icon = ""; 

				class TFAR_IntercomChannel_disabled 
				{
					displayName = "Disabled"; 
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != -1"; 
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];"; 
				}; 
				class TFAR_IntercomChannel_1 
				{
					displayName = "Cargo"; 
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != 0"; 
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];"; 
				}; 
				class TFAR_IntercomChannel_2 
				{
					displayName = "Crew"; 
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != 1"; 
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];"; 
				};
				class TFAR_IntercomChannel_3 
				{
					displayName = "Misc Channel 1"; 
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 2"; 
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];"; 
				};
				class TFAR_IntercomChannel_4
				{
					displayName = "Misc Channel 2";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 3";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
				};
				class TFAR_IntercomChannel_5
				{
					displayName = "Misc Channel 3";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 4";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
				};
			};
		};
		textureList[] = {"Blu", 1};
		class TextureSources
		{
			class Blu_Plain
			{
				displayName = "Plain";
				author = "3AS";
				textures[] = 
				{
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Droid_Hunter
			{
				displayName = "Droid Hunter";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\Hull_Droid_Hunter.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_ARC_Trooper
			{
				displayName = "ARC Trooper";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_187_ARC.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Nexu
			{
				displayName = "Nexu";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_BEAST.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Victory
			{
				displayName = "Victory";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_CLONE_GRAB.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Kaminoan
			{
				displayName = "Kaminoan";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_KAMINOAN.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Dooku_Kick
			{
				displayName = "Dooku Kick";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_KICK_DOOKU.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Krelled
			{
				displayName = "Krelled";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_KRELLED.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Mace_Pose
			{
				displayName = "Mace Posed";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_MACE_POSE.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Mace_Punch
			{
				displayName = "Mace Punch";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_MACE_PUNCH.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Plos_Bros
			{
				displayName = "Plos Bros";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_PLOKOON.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Twilek_Dancer
			{
				displayName = "Twilek Dancer";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_PURPLE_TWILEK.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Rancor
			{
				displayName = "Rancor";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_RANCOR.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Helmet
			{
				displayName = "Helmet";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_SKULL_HELMET.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Twilek_Pose
			{
				displayName = "Twilek Pose";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\NOSE_ART_TWILEK_STAND.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
			class Blu_Custom_Freezy
			{
				displayName = "Custom (Freezy)";
				author = "Sparrow";
				textures[] = 
				{
					"\187th-aux\Data\Vehicles\LAAT_Nose_Art\Hull_Freezy_CO.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
		};
	};
};