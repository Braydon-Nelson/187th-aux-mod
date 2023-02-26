class CfgPatches
{
	class 187th_ATJT
	{
		name = "187th AT-JT";
		author = "MickeyD";
		requiredVersion = 0.01;
		requiredAddons[]={};
		units[]={"ATJT_187th"};
	};
};

class CfgWeapons
{
	class 3AS_ATTE_Turret;
	class Z20_Cannon: 3AS_ATTE_Turret
	{
		displayName="Z20 Cannon";
		count = 150;
		magazines[]=
		{
			"187th_J_3as_saber_80Rnd_autocannon_30mm_mag"
		};
	};
};

class CfgVehicles
{
	class Car_F;
    class Wheeled_APC_F: Car_F
    {
        class Turrets;
    };
    class 3as_ATJT_Base: Wheeled_APC_F
    {
        class Turrets: Turrets
        {
            class MainTurretTop;
            class MainTurretFront;
            class MainTurretBack;
        };
    };
	class ATJT_187th: 3AS_ATJT_Base
	{
		scope=2;
		scopecurator=2;
		displayname="AT-JT";
		side=1;
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		maxSpeed=90;
		ace_cargo_space = 100;
		ace_repair_canRepair=1;
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4.3,-8.5]]], [0.1], [-0.5]]";
		weapons = ["TruckHorn3"];
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_atte\data\atte_hull_TCW_co.paa",
			"3as\3as_atte\data\atte_chasis_co.paa",
			"3as\3as_atte\data\atte_cockpit_TCW_co.paa",
			"3as\3as_atte\data\atte_turrets_TCW_co.paa",
			"3as\3as_atte\data\atte_underpiping_co.paa",
		};
		class Turrets: Turrets
		{
			class MainTurretTop: MainTurretTop
			{
				weapons[]=
				{
					"3AS_Mass_Driver_Cannon",
					"Bantha_Z6",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"3AS_30Rnd_Mass_Driver_shells",
					"3AS_30Rnd_Mass_Driver_shells",
					"3AS_30Rnd_Mass_Driver_shells",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"SmokeLauncherMag"
				};
			};
			class MainTurretFront: MainTurretFront
			{
				weapons[]=
				{
					"Z20_Cannon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"SmokeLauncherMag"
				};
			};
			class MainTurretBack: MainTurretBack
			{
				weapons[]=
				{
					"Z20_Cannon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"187th_J_3as_saber_80Rnd_autocannon_30mm_mag",
					"SmokeLauncherMag"
				};
			};
		};
	};
};