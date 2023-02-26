class CfgPatches
{
	class 187th_CIS_Boat
	{
		name = "187th Boat";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_Speedboat"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 442_boat_armed;
	class 187th_Speedboat: 442_boat_armed
	{
	    faction = "187th_CIS";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Boat";
	    side = 0;
	    displayName = "Speedboat";
	    crew = "187th_B1_Droid_Crew";
	    typicalCargo[] = {
	        "187th_B1_Droid_Crew"
	    };
	};
};