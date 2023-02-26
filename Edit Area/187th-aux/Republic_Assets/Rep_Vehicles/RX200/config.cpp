class CfgPatches
{
	class 187th_RX200
	{
		name = "187th RX200";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_RX200"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_RX200_Base;
	class 187th_RX200 : 3AS_RX200_Base
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		tas_canBlift=1;
		tas_liftVars="[[[[0,-2.8,-8.3]]], [0], [-0.1]]";
		ace_refuel_fuelCargo = 999999999999;
		ace_rearm_defaultSupply = 999999999999;
		ace_cargo_space = 170;
		ace_repair_canRepair = 1;
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		displayName="RX200";
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};