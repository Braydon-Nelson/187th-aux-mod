class CfgPatches
{
	class 187th_CIS_Argon
	{
		name = "187th CIS Argon Trucks";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_O_DBA_CIS_Argon_Ammo_F","187th_O_DBA_CIS_Argon_Device_F","187th_O_DBA_CIS_Argon_Fuel_F","187th_O_DBA_CIS_Argon_Medical_F","187th_O_DBA_CIS_Argon_Repair_F","187th_O_DBA_CIS_Argon_Transport_F","187th_O_DBA_CIS_Argon_Transport_Covered_F"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class O_DBA_CIS_Argon_Ammo_F;
	class 187th_O_DBA_CIS_Argon_Ammo_F : O_DBA_CIS_Argon_Ammo_F
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Ammo Truck";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};

	class 442_argon_device_cis;
	class 187th_O_DBA_CIS_Argon_Device_F : 442_argon_device_cis
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Device Carrier";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};

	class 442_argon_fuel_cis;
	class 187th_O_DBA_CIS_Argon_Fuel_F : 442_argon_fuel_cis
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Fuel Truck";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};

	class 442_argon_medical_cis;
	class 187th_O_DBA_CIS_Argon_Medical_F : 442_argon_medical_cis
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Medical Truck";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};

	class 442_argon_repair_cis;
	class 187th_O_DBA_CIS_Argon_Repair_F : 442_argon_repair_cis
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Repair Truck";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};

	class 442_argon_transport_cis;
	class 187th_O_DBA_CIS_Argon_Transport_F : 442_argon_transport_cis
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Transport Truck";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};

	class 442_argon_covered_cis;
	class 187th_O_DBA_CIS_Argon_Transport_Covered_F : 442_argon_covered_cis
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Argon Transport Truck (Covered)";
	    faction="187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Argon";
		crew="187th_B1_Droid";
		typicalCargo[]={"187th_B1_Droid"};
	};
};