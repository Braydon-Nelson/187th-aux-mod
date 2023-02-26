class CfgPatches
{
	class Aux187_Rep_Magazines
	{
		name = "187th Magazines";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		magazines[] =
		{
			"Aux187_DC15A_mag",
			"Aux187_DC15S_mag",
			"Aux187_DC15L_mag",
			"Aux187_Z6_charged_mag",
			"Aux187_DC15X_charge_mag",
			"Aux187_DC15X_mag",
			"Aux187_DC17SA_mag",
			"Aux187_DP23_mag",
			"Aux187_DP23_wide_mag",
			"Aux187_DW32S_mag",
			"Aux187_T21_mag",
			"Aux187_Valken_mag",
			"Aux187_Westar_mag",
			"Aux187_Z6_mag",
			"187th_HE_Grenade_Shell",
			"187th_AP_Grenade_Shell",
		};
	};
};

class CfgMagazines
{
	class JLTS_DC15A_mag;
	class JLTS_DC15S_mag;
	class JLTS_Z6_mag;
	class JLTS_DC15X_mag;
	class JLTS_DC17SA_mag;
	class JLTS_DP23_mag;
	class JLTS_DW32S_mag;
	class 3AS_60Rnd_EC50_mag;
	class 1Rnd_HE_Grenade_Shell;
	
	class Aux187_DC15A_mag : JLTS_DC15A_mag
	{
		author = "Sparrow";
		ammo = "Aux187_blue_rifle_round";
		JLTS_hasElectronics=0;
	};
	
	class Aux187_DC15S_mag : JLTS_DC15S_mag
	{
		author = "Sparrow";
		ammo = "Aux187_blue_carbine_round";
		JLTS_hasElectronics=0;
	};
	
	class Aux187_DC15L_mag : JLTS_DC15A_mag
	{
		author = "Sparrow";
		count=150;
		displayName="DC-15L energy cell";
		ammo = "Aux187_blue_rifle_round";
		JLTS_hasElectronics=0;
	};
	
	class Aux187_Z6_charged_mag: JLTS_Z6_mag
	{
		author = "Circles";
		count = 70;
		displayName = "Z6-C mag";
		displayNameShort = "Over Clocked Mag";
		initSpeed = 1250; // -1.2 multiply by 120% original value. Neg value is multiplier, see documentation
		mass = 25;
		ammo = "187th_bullet_charged_carbine_red";
	};
	
	class Aux187_DC15X_charge_mag : JLTS_DC15X_mag
	{
		author = "Sparrow";
		count = 1;
		initSpeed = 2000;
		mass = 20;
		displayName = "DC-15X-C Mag";
		displayNameShort = "Charged Mag";
		ammo = "Aux187_bullet_sniper_red_187";
	};
	
	class Aux187_DC15X_mag : JLTS_DC15X_mag
	{
		author = "Sparrow";
		ammo = "Aux187_blue_sniper_round";
	};
	
	class Aux187_DC17SA_mag : JLTS_DC17SA_mag
	{
		author = "Sparrow";
		ammo = "Aux187_blue_pistol_round";
	};
	
	class Aux187_DP23_mag : JLTS_DP23_mag
	{
		displayName = "DP23 Mag (Tight Spread)";
		displayNameShort = "Tight Spread Cell";
		ammo = "Aux187_ScatterRounds";
		count=15;
		initspeed=1300;
	};
	
	class Aux187_DP23_wide_mag : JLTS_DP23_mag
	{
		displayName = "DP23 Mag (Wide Spread)";
		displayNameShort = "Wide Spread Cell";
		ammo = "Aux187_ScatterRounds_Wide";
		count=15;
		initspeed=1300;
	};
	
	class Aux187_DW32S_mag : JLTS_DW32S_mag
	{
		author = "Sparrow";
		ammo = "Aux187_blue_rifle_round";
	};
	
	class Aux187_T21_mag : JLTS_Z6_mag
	{
		displayName="T-21 Mag";
		displayNameShort = "Standard Mag";
		count=80;
		ammo="Aux187_charged_bullet_rifle_blue";
		mass = 20;
		tracersEvery=1;
	};
	
	class Aux187_Valken_mag : JLTS_DW32S_mag
	{
		displayName="Valken-38X Mag";
		displayNameShort = "Standard Mag";
		count=15;
		ammo="Aux187_blue_rifle_round";
		tracersEvery=1;
	};
	
	class Aux187_Westar_mag : 3AS_60Rnd_EC50_mag
	{
		displayName="Westar-M5 Mag";
		displayNameShort = "Standard Mag";
		count=60;
		ammo="JLTS_bullet_rifle_blue";
		tracersEvery=1;
	};
	
	class Aux187_Z6_mag : JLTS_Z6_mag
	{
		author = "Sparrow";
		ammo = "Aux187_blue_carbine_round";
	};
	
	class 187th_AP_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="187th Aux";
		displayName="187th AP";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="187th_HEDP";
		displayNameShort="AP";
		count = 2;
		mass=12;
	};
	
	class 187th_HE_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="187th Aux";
		displayName="187th HE";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="187th_HE";
		displayNameShort="HE";
		count = 3;
		mass=12;
	};
};