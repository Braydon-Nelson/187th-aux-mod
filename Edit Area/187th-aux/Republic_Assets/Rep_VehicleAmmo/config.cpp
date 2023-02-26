class CfgPatches
{
	class Aux187_Vehicle_Ammo
	{
		name = "187th Vehicle Ammo";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		ammo[] = 
		{
			"Aux187_Z20_green_tracers",
		};
	};
};

class CfgAmmo
{
	class 3AS_ATTE_30mm_MP;
	class 4rnd_120mm_LG_cannon_missiles;
	
	class Aux187_Z20_green_tracers : 3AS_ATTE_30mm_MP
	{
		author = "Sparrow";
		model="\3AS\3AS_Weapons\Data\tracer_green";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
		tracerScale=2;
	};
};