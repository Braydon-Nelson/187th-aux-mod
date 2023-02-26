class CfgPatches
{
	class 187th_Tank_Vests
	{
		name = "187th Tank Vests";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"Aux187_Tank_Vest_Test"};
	};
};

class CfgWeapons
{
	class VestItem;
	class Aux187_Tank_Vest_Test
	{
		displayName = "[187th] Tanker Vest Test";
		scope = 2;
		model="\187th-aux\Data\Models\Vests\TANKER_VEST_TEST2.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Vests\Tanker\Tanker_Vest_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\187th-aux\Data\Models\Vests\TANKER_VEST_TEST2.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			class HitpointsProtectionInfo
			{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 24; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
			};
		};
	};
};