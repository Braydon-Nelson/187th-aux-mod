class CfgPatches
{
	class 187th_Bacta_Tank
	{
		name = "187th Bacta Tank";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = 
		{
			"Bacta_Tank_187th",
		};
		weapons[] = {};
	};
};

class DefaultEventhandlers;
class CfgVehicles
{
	
	class lsb_BactaTank;
	class Medical_187th_Gonk: lsb_BactaTank
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		side=1;
		displayName="[187th] Bacta Tank";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\187th-aux\Functions\medical\medical.sqf';";
		};
	};
};