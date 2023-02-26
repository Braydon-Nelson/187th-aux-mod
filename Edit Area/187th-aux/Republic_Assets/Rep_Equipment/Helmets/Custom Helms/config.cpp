class CfgPatches
{
	class 187th_Custom_Helms
	{
		name = "187th Custom Helmets";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] =
		{
			"187_Clone_Helmet_Sparrow",
			"187_Clone_Helmet_Sparrow2",
			"187_Clone_Helmet_Blu",
			"187_Clone_Helmet_Darkhorse",
			"187_Clone_Helmet_Panda",
			"187_Clone_Helmet_Bravocado",
			"187_Clone_Helmet_SpaceDaddy",
			"187_Clone_Helmet_Vinokurov",
			"187_Clone_Helmet_Badger",
			"187_Clone_Helmet_Mountain",
			"187_Clone_Helmet_Scrut",
			"187_Clone_Helmet_Locust",
			"187_Clone_Helmet_Benson",
			"187_Clone_Helmet_Raven",
			"187_Clone_Helmet_Circles",
			"187_Clone_Helmet_Odissis",
			"187_Clone_Helmet_Pottan",
			"187_Clone_Helmet_Crys",
			"187_Clone_Helmet_Insomniac",
			"187_Clone_Helmet_Prophet",
			"187_Clone_Helmet_Mufasa",
			"187_Clone_Helmet_Tic",
			"187_Clone_Helmet_Shocker",
			"187_Clone_Helmet_Puk",
			"187_Clone_Helmet_Talon",
			"187_Clone_Helmet_Beedog",
			"187_Clone_Helmet_Mile",
			"187_Clone_Helmet_Thor",
			"187_Clone_Helmet_Liam",
			"187_Clone_Helmet_Dropkick",
			"187_Clone_Helmet_Koala",
			"187_Clone_Helmet_Hawk",
			"187_Clone_Helmet_Scrut2",
			"187_Clone_Helmet_Isaac",
			"187_Clone_Helmet_Iron",
			"187_Clone_Helmet_Kito",
			"187_Clone_Helmet_Shut",
			"187_Clone_Helmet_Ghost",
			"187_Clone_Helmet_Flip",
			"187_Clone_Helmet_Kraken",
			"187_Clone_Helmet_Zev",
			"187_Clone_Helmet_Fin",
			"187_Clone_Helmet_Revan",
			"187_Clone_Helmet_Sitter",
			"187_Clone_Helmet_Star",
			"187_Clone_Helmet_Oxygen",
			"187_Clone_Helmet_Fluffy",
			"187_Clone_Helmet_Vulcan",
			"187_Clone_Helmet_Skullz",
			"187_Clone_Helmet_King",
			"187_Clone_Helmet_Fear",
			"187_Clone_Helmet_Thunder",
			"187_Clone_Helmet_Santo",
			"187_Clone_Helmet_Hiltwa",
			"187_Clone_Helmet_Alastor",
			"187_Clone_Helmet_Blackrock",
			"187_Clone_Helmet_Fire",
			"187_Clone_Helmet_Tarps",
			"187_Clone_Helmet_Tac",
			"187_Clone_Helmet_Avian",
			"187_Clone_Helmet_Apathy",
			"187_Clone_Helmet_Toad",
			"187_Clone_Helmet_Phoenix",
			"187_Clone_Helmet_Pelican",
			"187_Clone_Helmet_Wolf",
			"187_Clone_Helmet_Buzz",
			"187_Clone_Helmet_Puma",
			"187_Clone_Helmet_Salt",
			"187_Clone_Helmet_Freezy",
			"187_Clone_Helmet_Print",
			"187_Clone_Helmet_Wub",
			"187_Clone_Helmet_Gendo",
			"187_Clone_Helmet_Crypto",
			"187_Clone_Helmet_Heron",
			"187_Clone_Helmet_Lost",
			"187_Clone_Helmet_Solembum",
			"187_Clone_Helmet_Gort",
			"187_Clone_Helmet_Pyro",
			"187_Clone_Helmet_Jan",
			"187_Clone_Helmet_Mixer",
			"187_Clone_Helmet_Vepp",
			"187_Clone_Helmet_Dross",
			"187_Clone_Helmet_Bravocado",
			"187_Clone_Helmet_Mufasa",
			"187_Clone_Helmet_Hoyt",
			"187_Clone_Helmet_Meister",
			"187_Clone_Helmet_Mando",
		};
	};
};

//Helmet Objects//
class CfgEditorSubcategories
{
	class 187th_helmets
	{
		displayname = "Helmets"
	};
};

class CfgVehicles
{
	class headgear_base_f;
	class 187th_headgear_base : headgear_base_f
	{
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		displayname = "[187th] Headgear";
		editorcategory = "187th_Rep_Assets";
		editorsubcategory = "187th_helmets";
		vehicleclass = "ItemsHeadgear";
		class transportItems
		{
			class helmet
			{
				name = "";
				count = 1;
			};
		};
	};
	
	class 187th_headgear_sparrow : 187th_headgear_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[187th] Helmet (Sparrow)";
		class transportItems
		{
			class helmet
			{
				name = "187_Clone_Helmet_Sparrow";
				count = 1;
			};
		};
	};
	
	class 187th_headgear_fluffy : 187th_headgear_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[187th] Helmet (Fluffy)";
		class transportItems
		{
			class helmet
			{
				name = "187_Clone_Helmet_Fluffy";
				count = 1;
			};
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;

	// ---------------------------------------------------------------------------------
	//                                  Copy / Paste
	// ---------------------------------------------------------------------------------

	/*
	class 187_Clone_Helmet_NAME: 187_Clone_Helmet
	{
		author 	= "";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (NAME)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_NAME.paa"};
	};

	*/

	// ---------------------------------------------------------------------------------
	//                                    Paladin
	// ---------------------------------------------------------------------------------
	class JLTS_CloneHelmetP2MC;
	class 187_Clone_Helmet_Sparrow: JLTS_CloneHelmetP2MC
	{
		displayName = "[187th] Clone Custom Helmet (Sparrow)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		weaponPoolAvailable = 1;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\187th-aux\Data\Helmets\187thHelmet_Sparrow.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2MC.p3d";
			hiddenSelections[]={"camo1"};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
		};
	};

	class 187_Clone_Helmet;
	class 187_Clone_Helmet_Blu: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Blu)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Blu.paa"};
	};

	class 187_Clone_Helmet_Darkhorse: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Darkhorse)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Darkhorse.paa"};
	};

	class 187_Clone_Helmet_Vinokurov: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Vinokurov)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Vinokurov.paa"};
	};

	class 187_Clone_Helmet_Badger: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Badger)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Badger.paa"};
	};

	/*class 187_Clone_Helmet_Mountain: 187_Clone_Helmet LEFT THE UNIT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mountain)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mountain.paa"};
	};*/

	/*class 187_Clone_Helmet_Scrut: 187_Clone_Helmet LEFT THE UNIT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Scrut)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Scrut.paa"};
	};*/

	class 187_Clone_Helmet_Circles: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Circles)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Circles.paa"};
	};


	/*class 187_Clone_Helmet_Pottan: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Pottan)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pottan.paa"};
	};*/

	/*class 187_Clone_Helmet_Crys: 187_Clone_Helmet LEFT THE UNIT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Crys)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Crys.paa"};
	};*/

	class 187_Clone_Helmet_Insomniac: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Insomniac)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Insomniac.paa"};
	};

	class 187_Clone_Helmet_Thor: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Thor)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Thor.paa"};
	};

	class 187_Clone_Helmet_Liam: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Liam)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Liam.paa"};
	};

	/*class 187_Clone_Helmet_Dropkick: 187_Clone_Helmet LEFT THE UNIT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Dropkick)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Dropkick.paa"};
	};*/

	class 187_Clone_Helmet_Koala: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Koala)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Koala.paa"};
	};

	class 187_Clone_Helmet_Puk: 187_Clone_Helmet
	{
		author 	= "Panda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Puk)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Puk.paa"};
	};

	class 187_Clone_Helmet_Iron: 187_Clone_Helmet
	{
		author 	= "";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Iron)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Iron.paa"};
	};

	class 187_Clone_Helmet_Kito: 187_Clone_Helmet
	{
		author 	= "";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Kito)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Kito.paa"};
	};
	
	class 187_Clone_Helmet_Raven: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Raven)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Raven.paa"};
	};
	
	class 187_Clone_Helmet_Fin: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Fin)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Fin.paa"};
	};
	
	class 187_Clone_Helmet_Flip: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Flip)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Flip.paa"};
	};
	
	class 187_Clone_Helmet_Fluffy: 187_Clone_Helmet /* Rest in Peace broski */
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Fluffy)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Fluffy.paa"};
	};
	
	class 187_Clone_Helmet_Oxygen: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Oxygen)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Oxygen.paa"};
	};
	
	class 187_Clone_Helmet_Revan: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Revan)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Revan.paa"};
	};
	
	class 187_Clone_Helmet_Star: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Star)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Star.paa"};
	};
	
	class 187_Clone_Helmet_King: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (King)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_King.paa"};
	};
	
	class 187_Clone_Helmet_Fear: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Fear)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Fear.paa"};
	};
	
	class 187_Clone_Helmet_Thunder: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Thunder)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Thunder.paa"};
	};
	
	class 187_Clone_Helmet_Santo: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Santo)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Santo.paa"};
	};
	
	class 187_Clone_Helmet_Hiltwa: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Hiltwa)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Hiltwa.paa"};
	};
	
	class 187_Clone_Helmet_Alastor: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Alastor)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Alastor.paa"};
	};
	
	class 187_Clone_Helmet_Fire: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Fire)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Fire.paa"};
	};
	
	class 187_Clone_Helmet_Toad: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Toad)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Toad.paa"};
	};
	
	class 187_Clone_Helmet_Tac: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Tac)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tac.paa"};
	};

	class 187_Clone_Helmet_Puma: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Puma)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Puma.paa"};
	};
	
	class 187_Clone_Helmet_Salt: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Salt)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Salt.paa"};
	};
	
	class 187_Clone_Helmet_Gendo: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Gendo)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Gendo.paa"};
	};
	
	class 187_Clone_Helmet_Crypto: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Crypto)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Crypto.paa"};
	};
	
	class 187_Clone_Helmet_Heron: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Heron)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Heron.paa"};
	};
	
	class 187_Clone_Helmet_Lost: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Lost)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Lost.paa"};
	};
	
	class 187_Clone_Helmet_Solembum: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Solembum)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Solembum.paa"};
	};
	
	class 187_Clone_Helmet_Pyro: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Pyro)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pyro.paa"};
	};
	
	class 187_Clone_Helmet_Mixer: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mixer)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mixer.paa"};
	};
	
	class 187_Clone_Helmet_Apathy: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Apathy)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Apathy.paa"};
	};
	
	class 187_Clone_Helmet_Pete: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Pete)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pete.paa"};
	};
	
	class 187_Clone_Helmet_Dross: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Dross)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Dross.paa"};
	};
	
	class 187_Clone_Helmet_Print: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Print)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Print.paa"};
	};
	
	class 187_Clone_Helmet_Bravocado: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Bravocado)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Bravocado.paa"};
	};
	
	class 187_Clone_Helmet_Panda: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Panda)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Panda.paa"};
	};
	
	class 187_Clone_Helmet_Mufasa: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mufasa)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mufasa.paa"};
	};
	
	class 187_Clone_Helmet_Hoyt: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Hoyt)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Hoyt.paa"};
	};
	
	class 187_Clone_Helmet_Wub: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Wub)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Wub.paa"};
	};
	
	class 187_Clone_Helmet_Wolf: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Wolf)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Wolf.paa"};
	};
	
	class 187_Clone_Helmet_Mando: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mando)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mando.paa"};
	};

	// ---------------------------------------------------------------------------------
	//                                    Lancer
	// ---------------------------------------------------------------------------------

	class 187_Tanker_Helmet;
	
	class 187_Clone_Helmet_Isaac: 187_Tanker_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Isaac)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Isaac.paa"};
	};
	
	/*class 187_Clone_Helmet_Phoenix: 187_Tanker_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Phoenix)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Phoenix.paa"};
	};*/
	
	class 187_Clone_Helmet_Pelican: 187_Tanker_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Pelican)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pelican.paa"};
	};
	
	class 187_Clone_Helmet_Darkling: 187_Tanker_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Darkling)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Darkling.paa"};
	};
	
	class 187_Clone_Helmet_Kraken: 187_Tanker_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Kraken)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Kraken.paa"};
	};
	
	class 187_Clone_Helmet_Vepp: 187_Tanker_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Vepp)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Vepp.paa"};
	};

	// ---------------------------------------------------------------------------------
	//                                    Archer
	// ---------------------------------------------------------------------------------

	class 187_Clone_Helmet_Airborne;
	class 187_Clone_Helmet_Locust: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Locust)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Locust.paa"};
	};

	class 187_Clone_Helmet_Odissis: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Odissis)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Odissis.paa"};
	};

	class 187_Clone_Helmet_Ghost: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Ghost)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Ghost.paa"};
	};
	
	class 187_Clone_Helmet_Zev: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Zev)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Zev.paa"};
	};
	
	class 187_Clone_Helmet_Vulcan: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Vulcan)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Vulcan.paa"};
	};
	
	class 187_Clone_Helmet_Blackrock: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Blackrock)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Blackrock.paa"};
	};
	
	class 187_Clone_Helmet_Sparrow2: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Sparrow2)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Sparrow2.paa"};
	};
	
	class 187_Clone_Helmet_Ben: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Ben)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Ben.paa"};
	};
	
	class 187_Clone_Helmet_Nyanti: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Nyanti)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Nyanti.paa"};
	};
	
	class 187_Clone_Helmet_Shut: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Shut)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Shut.paa"};
	};
	
	class 187_Clone_Helmet_Tarps: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Tarps)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tarps.paa"};
	};
	
	class 187_Clone_Helmet_Sitter: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Sitter)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Sitter.paa"};
	};
	
	class 187_Clone_Helmet_Shocker: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Shocker)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Shocker.paa"};
	};

	// ---------------------------------------------------------------------------------
	//                                    Hawkbat
	// ---------------------------------------------------------------------------------

	class 187_Pilot_HelmetP2;

	class 187_Clone_Helmet_Avian: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Avian)";
		hiddenSelectionsTextures[]=
		{
        "\187th-aux\Data\Helmets\187thHelmet_Avian.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "\187th-aux\Data\Helmets\187thHelmet_Avian.paa",
        ""
		};
	};
	
	class 187_Clone_Helmet_Buzz: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Buzz)";
		hiddenSelectionsTextures[]=
		{
        "\187th-aux\Data\Helmets\187thHelmet_Buzz.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "\187th-aux\Data\Helmets\187thHelmet_Buzz.paa",
        ""
		};
	};
	
	class 187_Clone_Helmet_Freezy: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Freezy)";
		hiddenSelectionsTextures[]=
		{
        "\187th-aux\Data\Helmets\187thHelmet_Freezy.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "\187th-aux\Data\Helmets\187thHelmet_Freezy.paa",
        ""
		};
	};
	
	class 187_Clone_Helmet_Gort: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Gort)";
		hiddenSelectionsTextures[]=
		{
        "\187th-aux\Data\Helmets\187thHelmet_Gort.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "\187th-aux\Data\Helmets\187thHelmet_Gort.paa",
        ""
		};
	};
	
	class 187_Clone_Helmet_Nomad: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Nomad)";
		hiddenSelectionsTextures[]=
		{
        "\187th-aux\Data\Helmets\187thHelmet_Nomad.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "\187th-aux\Data\Helmets\187thHelmet_Nomad.paa",
        ""
		};
	};
	
	class 187_Clone_Helmet_Meister: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Meister)";
		hiddenSelectionsTextures[]=
		{
        "\187th-aux\Data\Helmets\187thHelmet_Meister.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "\187th-aux\Data\Helmets\187thHelmet_Meister.paa",
        ""
		};
	};
};