class CfgPatches
{
	class 187th_ATTE
	{
		name = "187th ATTE";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_ATTE"};
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
    class 3as_ATTE_Base: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurretTop;
            class MainTurretFront;
            class MainTurretBack;
        };
    };
	
	class 187th_ATTE : 3as_ATTE_Base
	{
		faction="187th_Republic";     
		editorCategory="187th_Test_Assets";     
		editorSubcategory="187th_Armor";
		side=1;
		displayname="ATTE";
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		weapons = ["TruckHorn3"];
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_atte\data\atte_hull_TCW_co.paa",
			"3as\3as_atte\data\atte_chasis_co.paa",
			"3as\3as_atte\data\atte_cockpit_TCW_co.paa",
			"3as\3as_atte\data\atte_turrets_TCW_co.paa",
			"3as\3as_atte\data\atte_underpiping_co.paa",
			"3as\3as_atte\data\atte_middleleg_TCW_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurretTop: MainTurretTop
			{
				startEngine=0;
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
                startEngine=0;
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