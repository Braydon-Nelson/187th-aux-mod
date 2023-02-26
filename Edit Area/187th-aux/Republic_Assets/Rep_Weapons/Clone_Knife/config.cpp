class CfgPatches
{
	class Knife_187
	{
		name = "187th Knife";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Aux187_Knife"};
	};
};

class CfgWeapons
{

	class Weap_melee_knife;
	class Aux187_Knife: Weap_melee_knife
	{
		displayName="[187th] Knife";
		scope=2;
		model="LFPmeleeweap\data\cloneknife.p3d";
		IMS_Melee_Param_Damage = 0.25;
		IMS_Melee_Param_Sounds = ["knife_empty_hit_1","knife_empty_hit_2","knife_empty_hit_3","knife_empty_hit_4"];
		IMS_Melee_Param_SoundsOnHit = ["sword_hit_1","sword_hit_2","sword_hit_3","sword_hit_4","sword_hit_5","sword_hit_6"];
		IMS_Melee_Param_SoundsOnBlock = ["sword_to_sword_1","sword_to_sword_2","sword_to_sword_3","sword_to_sword_4"];
		IMS_WeaponType = "OneHanded";
		IMS_ExecutionType = "Knife";
		class WeaponSlotsInfo
		{
			mass=20;
			holsterScale = 0;
		};
    };
};