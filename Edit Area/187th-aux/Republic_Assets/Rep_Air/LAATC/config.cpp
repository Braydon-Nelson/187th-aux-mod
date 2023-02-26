class CfgPatches
{
	class 187th_LAATC
	{
		name = "187th LAAT/C";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_LAATC"};
		weapons[] = {};
	};
};

class CfgMagazines
{
	class 3as_LAAT_8Rnd_Missile_AGM;
	class Aux187_LAATC_2Rnd_AGM_Missile : 3as_LAAT_8Rnd_Missile_AGM
	{
		displayName = "[187th] Torrent 2Rnd AGM Missiles";
		ammo = "3as_LAAT_AGM_Missile";
		count = 2;
	};
	
	class 3as_PylonMissile_LAAT_8Rnd_Missile_AA;
	class Aux187_LAATC_2Rnd_AA_Missile : 3as_PylonMissile_LAAT_8Rnd_Missile_AA
	{
		displayName = "[187th] Sidewinder 2Rnd AA Missiles";
		count = 2;
	};
};

class CfgWeapons
{
	class 3as_LAAT_Missile_AGM;
	class Aux187_LAATC_AGM_Missile : 3as_LAAT_Missile_AGM
	{
		displayName = "Torrent Air-to-Ground Missile";
		magazines[]=
		{
			"Aux187_LAATC_2Rnd_AGM_Missile"
		};
	};
	
	class 3as_LAAT_Missile_AA;
	class Aux187_LAATC_AA_Missile : 3as_LAAT_Missile_AA
	{
		displayName = "Sidewinder Air-to-Air Missile";
		magazines[]=
		{
			"Aux187_LAATC_2Rnd_AA_Missile"
		};
	};
};

class CfgVehicles
{
	class 3AS_LAATC;
	class 187th_LAATC : 3AS_LAATC
	{
		faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Helicopter";
		side=1;
		displayName="LAAT/c";
		crew="187th_Pilot";
		typicalCargo[]={"187th_Pilot"};
		weapons[]=
		{
			"ParticleBeamCannon_F",
			"Aux187_LAATC_AGM_Missile",
			"Aux187_LAATC_AA_Missile",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"Laser_Battery",
			"Laser_Battery",
			"Aux187_LAATC_2Rnd_AGM_Missile",
			"Aux187_LAATC_2Rnd_AA_Missile",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		class UserActions
		{
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
			class LoadCargo
			{
				userActionID=6;
				displayName="Load Vehicle";
				displayNameDefault="Load Vehicle";
				textToolTip="Load Vehicle";
				position="pilotview";
				showWindow=0;
				radius=5;
				priority=1;
				onlyForPlayer=0;
				condition="((speed this < TAS_lcLoadSpeed) AND (player == currentPilot vehicle player))";
				statement="0 = [this] spawn TAS_fnc_Maglift;";
			};
			class UnLoadCargo
			{
				userActionID=7;
				displayName="Unload Vehicles";
				displayNameDefault="Unload Vehicles";
				textToolTip="Unload Vehicles";
				position="pilotview";
				showWindow=0;
				radius=15;
				priority=3;
				onlyForPlayer=0;
				condition="(count(this getVariable [""TAS_Loaded"",[]]) > 0)";
				statement="0 = [this] spawn TAS_fnc_MagDrop;";
			};
		};
	};
};