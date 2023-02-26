class CfgPatches
{
	class Aux187_Special_Units
	{
		name = "187th Special Units";
		author = "Sparrow";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] =
		{
			"Aux187th_Winter_Smasher_Snow",
			"Aux187th_Winter_Smasher_Ice1",
			"Aux187th_Winter_Smasher_Ice2",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class WBK_SpecialZombie_Smasher_1;


	class Aux187th_Winter_Smasher_Snow: WBK_SpecialZombie_Smasher_1
	{
		faction = "187th_CIS";
		editorCategory = "187th_Test_Assets";
		editorSubcategory = "187th_Special2"; 
		side=0;
		displayName="Winter Smasher (Snow)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Uniforms\Smasher_Texture_Snow.paa"
		};
	};
	
	class Aux187th_Winter_Smasher_Ice1: WBK_SpecialZombie_Smasher_1
	{
		faction = "187th_CIS";
		editorCategory = "187th_Test_Assets";
		editorSubcategory = "187th_Special2"; 
		side=0;
		displayName="Winter Smasher (Ice 1)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Uniforms\Smasher_Texture_Ice1.paa"
		};
	};
	
	class Aux187th_Winter_Smasher_Ice2: WBK_SpecialZombie_Smasher_1
	{
		faction = "187th_CIS";
		editorCategory = "187th_Test_Assets";
		editorSubcategory = "187th_Special2"; 
		side=0;
		displayName="Winter Smasher (Ice 2)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\187th-aux\Data\Uniforms\Smasher_Texture_Ice2.paa"
		};
	};

};