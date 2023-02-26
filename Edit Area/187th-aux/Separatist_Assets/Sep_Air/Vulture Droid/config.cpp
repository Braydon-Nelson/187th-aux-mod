class CfgPatches
{
	class 187th_Vulture_Droids
	{
		name = "187th Vulture Droids";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Vulture_Droid","187th_Vulture_Droid_AA","187th_Vulture_Droid_CAS"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 332nd_aux_vehicle_air_CIS_Vulture_GUN;
	class 187th_Vulture_Droid: 332nd_aux_vehicle_air_CIS_Vulture_GUN
	{
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Plane";
	    side = 0;
	    displayName = "Vulture Droid (Guns)";
	    crew = "187th_B1_Droid_Pilot";
	    typicalCargo[] = {
	        "187th_B1_Droid_Pilot"
	    };
	};

	class 332nd_aux_vehicle_air_CIS_Vulture_CAP;
	class 187th_Vulture_Droid_AA: 332nd_aux_vehicle_air_CIS_Vulture_CAP
	{
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Plane";
	    side = 0;
	    displayName = "Vulture Droid (CAP)";
	    crew = "187th_B1_Droid_Pilot";
	    typicalCargo[] = {
	        "187th_B1_Droid_Pilot"
	    };
	};

	class 332nd_aux_vehicle_air_CIS_Vulture_CAS;
	class 187th_Vulture_Droid_CAS: 332nd_aux_vehicle_air_CIS_Vulture_CAS
	{
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Plane";
	    side = 0;
	    displayName = "Vulture Droid (CAS)";
	    crew = "187th_B1_Droid_Pilot";
	    typicalCargo[] = {
	        "187th_B1_Droid_Pilot"
	    };
	};
};