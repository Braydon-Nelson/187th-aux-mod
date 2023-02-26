class CfgPatches
{
	class 187th_AA3
	{
		name = "187th AA3";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187th_AA3"};
	};
};

class CfgWeapons
{
	class launch_B_Titan_F;
	class Aux187th_AA3: launch_B_Titan_F
	{
		displayName="[187th] AA-3";
		scope=2;
		scopeArsenal=2;
		ace_overpressure_damage = 0;
		magazines[]=
		{
			"Aux187_Titan_AA_2Rnd_mag"
		};
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Weapons\AA\Launcher1a.paa",
			"\187th-aux\Data\Weapons\AA\Tubel1a.paa"
		};
	};
};

class CfgMagazines
{
	class Titan_AA;
	class Aux187_Titan_AA_2Rnd_mag : Titan_AA
	{
		displayName = "AA-3 Mag";
		displayNameShort = "2 Missiles";
		count = 2;
		ammo = "M_Titan_AA";
		mass = 100;
	};
};