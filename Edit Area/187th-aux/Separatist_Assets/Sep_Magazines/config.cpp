class CfgPatches
{
	class Aux187_Seppy_Mags
	{
		name = "187th Seppy Magazines";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		magazines[] = 
		{
			"Aux187_E5_mag",
			"Aux187_E5C_mag",
			"Aux187_E5S_mag",
			"Aux187_RG4D_mag",
			"Aux187_DW32S_mag_red",
			"Aux187_SBB3_mag",
		};
	};
};

class CfgMagazines
{
	class JLTS_E5_mag;
	class JLTS_E5C_mag;
	class JLTS_E5S_mag;
	class JLTS_RG4D_mag;
	class JLTS_DW32S_mag;
	class JLTS_SBB3_mag;
	
	class Aux187_E5_mag : JLTS_E5_mag
	{
		author = "Sparrow";
		ammo = "Aux187_red_carbine_round";
	};
	
	class Aux187_E5C_mag : JLTS_E5C_mag
	{
		author = "Sparrow";
		ammo = "Aux187_red_carbine_round";
	};
	
	class Aux187_E5S_mag : JLTS_E5S_mag
	{
		author = "Sparrow";
		ammo = "Aux187_red_sniper_round";
	};
	
	class Aux187_RG4D_mag : JLTS_RG4D_mag
	{
		author = "Sparrow";
		ammo = "Aux187_red_pistol_round";
	};
	
	class Aux187_DW32S_mag_red : JLTS_DW32S_mag
	{
		author = "Sparrow";
		ammo = "Aux187_red_rifle_round";
	};
	
	class Aux187_SBB3_mag : JLTS_SBB3_mag
	{
		author = "Sparrow";
		ammo = "Aux187_red_scatter_round";
	};
};