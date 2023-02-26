class CfgPatches
{
	class Aux187_Ammunitions
	{
		name = "187th Ammo";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		ammo[] = 
		{
			"Aux187_blue_rifle_round",
			"Aux187_blue_carbine_round",
			"Aux187_charged_bullet_rifle_blue",
			"187th_bullet_charged_carbine_red",
			"Aux187_bullet_sniper_red_187",
			"Aux187_blue_sniper_round",
			"Aux187_blue_pistol_round",
			"Aux187_ScatterRounds",
			"Aux187_ScatterRounds_Wide",
			"187th_HEDP",
			"187th_HE",
		};
	};
};

class CfgAmmo
{
	class JLTS_bullet_rifle_blue;
	class JLTS_bullet_carbine_blue;
	class JLTS_bullet_sniper_red;
	class JLTS_bullet_sniper_blue;
	class JLTS_bullet_pistol_blue;
	class Aux187_red_carbine_round;
	class HitEffects;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class G_40mm_HEDP;
	class G_40mm_HE;
	
	class Aux187_blue_rifle_round : JLTS_bullet_rifle_blue
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	
	class Aux187_blue_carbine_round : JLTS_bullet_carbine_blue
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	
	class Aux187_blue_sniper_round : JLTS_bullet_sniper_blue
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	
	class Aux187_blue_pistol_round : JLTS_bullet_pistol_blue
	{
		author = "Sparrow";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};

	class 187th_bullet_charged_carbine_red: Aux187_red_carbine_round
	{
		author = "Circles";
		lightcolor[] = {0.500000,0.050000,0.500000};
		tracercolor[] = {0.500000,0.050000,0.500000};
		brightness = 8;
		shootDistraction = 10;
		dangerRadiusBulletClose = 9;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		caliber = 2.7;
		typicalSpeed = 1300;
		hit = 23;
		maxSpeed = 1300;
		visibleFire = 8;
		audibleFire = 10;
	};
	
	class Aux187_charged_bullet_rifle_blue : Aux187_blue_rifle_round
	{
		author = "Sparrow";
		tracerScale=1.8;
		hit = 25;
		caliber = 5;
		shootDistraction = 10;
		dangerRadiusBulletClose = 9;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
	};
	
	class Aux187_bullet_sniper_red_187 : JLTS_bullet_sniper_red
	{
		author = "Sparrow";
		caliber = 10;
		hit = 275;
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
	
	class Aux187_ScatterRounds : B_12Gauge_Pellets_Submunition
	{
		author="Sparrow";
		submunitionAmmo="Aux187_ScatterRound_Pellet";
		submunitionConeAngle=0.30000001;
		submunitionConeType[]=
		{
			"poissondisc",
			12
		};
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		fuseDistance=0;
		grenadeBurningSound[]={};
		grenadeFireSound[]={};
		hit=30;
		caliber=1;
		thrust=210;
		thrustTime=1.5;
		timeToLive=6;
		triggerDistance=0;
		typicalSpeed=900;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		soundSetBulletFly[]=
		{
			"JLTS_plasma_bullet_flyby_soundSet"
		};
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
	
	class Aux187_ScatterRounds_Wide : B_12Gauge_Pellets_Submunition
	{
		author="Sparrow";
		submunitionAmmo="Aux187_ScatterRound_Pellet";
		submunitionConeAngle=3;
		submunitionConeAngleHorizontal=40;
		submunitionConeType[]=
		{
			"poissondisc",
			12
		};
		hit=15;
		triggerDistance=0;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		ExplosionEffects="ls_plasma_impact";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		soundSetBulletFly[]=
		{
			"JLTS_plasma_bullet_flyby_soundSet"
		};
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
	
	class Aux187_ScatterRound_Pellet : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=15;
		caliber=1;
		typicalSpeed=360;
		triggerDistance=0;
		effectfly="3AS_PlasmaBolt_Blue_Fly";
		ExplosionEffects="ls_plasma_impact";
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
	
	class 187th_HEDP: G_40mm_HEDP
	{
		explosive = 0.05; //Undefine this for default value of ??
		hit = 500; //Undefine this for default value of ??
		caliber=60;
		indirecthit = 5;
		indrectrange = 2;
		model="3AS\3AS_Weapons\Data\tracer_shell_green.p3d";
		tracerScale=1;
		effectFly="3AS_PlasmaBolt_Green_Fly";
	};
	
	class 187th_HE: G_40mm_HE
	{
		model="3AS\3AS_Weapons\Data\tracer_shell_red.p3d";
		tracerScale=1;
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
};