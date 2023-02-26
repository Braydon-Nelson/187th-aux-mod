class CfgPatches
{
	class Aux187_Seppy_Ammo
	{
		name = "187th Seppy Ammo";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		ammo[] = 
		{
			"Aux187_red_carbine_round",
			"Aux187_red_sniper_round",
			"Aux187_red_pistol_round",
			"Aux187_red_rifle_round",
			"Aux187_red_scatter_round",
		};
	};
};

class CfgAmmo
{
	class JLTS_bullet_carbine_red;
	class JLTS_bullet_sniper_red;
	class JLTS_bullet_pistol_red;
	class JLTS_bullet_rifle_red;
	class JLTS_bullet_scatter_red;
	
	class Aux187_red_carbine_round : JLTS_bullet_carbine_red
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
	
	class Aux187_red_sniper_round : JLTS_bullet_sniper_red
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
	
	class Aux187_red_pistol_round : JLTS_bullet_pistol_red
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
	
	class Aux187_red_rifle_round : JLTS_bullet_rifle_red
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
	
	class Aux187_red_scatter_round : JLTS_bullet_scatter_red
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
};