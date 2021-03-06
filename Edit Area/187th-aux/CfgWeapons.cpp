class CfgWeapons
{
// main import

	class UniformItem;
	class Uniform_Base;


/***********************************************************************************************************
   --------------------------------------------------------------Uniforms---------------------------------------
 ************************************************************************************************************/
// Other Uniform stuff imports
   class JLTS_CloneArmor;

   class 187th_Clone_Recruit : JLTS_CloneArmor
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	scopeArsenal = 2;
   	displayName = "[187th] Clone Armor (Recruit)";
   	picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
   	class ItemInfo : UniformItem
   	{
   		uniformModel = "-";
   		uniformClass = "187th_CloneArmor_Recruit";
   		containerClass = "Supply150";
   		mass = 40;
   	};

   };

   class 187th_Clone_Trooper : JLTS_CloneArmor
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Armor (Trooper)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
   	class ItemInfo : UniformItem
   	{
   		uniformModel = "-";
   		uniformClass = "187th_CloneArmor_Trooper";
   		containerClass  = "Supply150";
   		mass = 40;
   	};
   };

   class 187th_Clone_Medic : JLTS_CloneArmor
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Armor (Medic)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
   	class ItemInfo : UniformItem
   	{
   		uniformModel = "-";
   		uniformClass = "187th_CloneArmor_Medic";
   		containerClass  = "Supply150";
   		mass = 40;
   	};
   };

   class 187th_Clone_Airborne : JLTS_CloneArmor
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Armor (Airborne)";
   	picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
   	class ItemInfo : UniformItem
   	{
   		uniformModel = "-";
   		uniformClass = "187th_CloneArmor_Airborne";
   		containerClass  = "Supply150";
   		mass = 40;
   	};
   };

   class 187th_Clone_EOD : JLTS_CloneArmor
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Armor (EOD)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
   	class ItemInfo : UniformItem
   	{
   		uniformModel = "-";
   		uniformClass = "187th_CloneArmor_EOD";
   		containerClass  = "Supply150";
   		mass = 40;
   	};
   };


/***********************************************************************************************************
   --------------------------------------------------------------Vests------------------------------------------
 ************************************************************************************************************/
   class JLTS_CloneVestHolster;
   class VestItem;
   class 187_Clone_Holster : JLTS_CloneVestHolster
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayname = "[187th] Sidearm Holster";
   	picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
   	model = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
   	hiddenSelections[] = {"camo1"};
   	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"};
   	class ItemInfo : VestItem
   	{
   		uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
   		containerClass = "Supply100";
   		hiddenSelections[] = {"camo1"};
   		mass=80;
   	};
   };
   class JLTS_CloneVestReconNCO;
   class 187_Clone_Vest_CPL : JLTS_CloneVestReconNCO
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayname = "[187th] Clone Vest (Corporal)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
   	model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
   	hiddenSelections[] = {"camo1"};
   	hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
   	class ItemInfo : VestItem
   	{
   		uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
   		containerClass = "Supply100";
   		hiddenSelections[] = {"camo1"};
   		mass = 80;
   	};
   };
   class JLTS_CloneVestReconOfficer;
   class 187_Clone_Vest_SGT : JLTS_CloneVestReconOfficer
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayname = "[187th] Clone Vest (SGT)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
   	model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
   	hiddenSelections[]=
   	{
   		"camo1",
   		"camo2"
   	};
   	hiddenSelectionsTextures[]=
   	{
   		"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
   		"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
   	};
   	class ItemInfo : VestItem
   	{
   		uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
   		containerClass = "Supply100";
   		hiddenSelections[] = {"camo1","camo2"};
   		mass=80;
   	};
   };
   class 187_Clone_Vest_SGM : JLTS_CloneVestReconOfficer
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayname = "[187th] Clone Vest (CSM)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
   	model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
   	hiddenSelections[]=
   	{
   		"camo1",
   		"camo2"
   	};
   	hiddenSelectionsTextures[]=
   	{
   		"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
   		"\187th-aux\Data\Vests\Clone_vest_heavy_sgtmjr.paa"
   	};
   	class ItemInfo : VestItem
   	{
   		uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
   		containerClass = "Supply100";
   		hiddenSelections[] = {"camo1","camo2"};
   		mass=80;
   	};
   };
   class JLTS_CloneVestOfficer;
   class 187_Clone_Vest_LT : JLTS_CloneVestOfficer
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayname = "[187th] Clone Vest (Lieutenant)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
   	model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
   	hiddenSelections[]=
   	{
   		"camo1"
   	};
   	hiddenSelectionsTextures[]=
   	{
   		"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
   	};
   	class ItemInfo : VestItem
   	{
   		uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
   		containerClass = "Supply100";
   		hiddenSelections[] = {"camo1"};
   		mass=80;
   	};
   };
   class 187_Clone_Vest_CPT : 187_Clone_Vest_LT
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayname = "[187th] Clone Vest (Captain)";
   	model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
   	hiddenSelections[]=
   	{
   		"camo1"
   	};
   	hiddenSelectionsTextures[]={"\187th-aux\Data\Vests\Clone_vest_officer_cpt_co.paa"};
   	class ItemInfo : VestItem
   	{
   		uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
   		containerClass = "Supply100";
   		hiddenSelections[] = {"camo1"};
   		mass=80;
   	};
   };


/***********************************************************************************************************
   --------------------------------------------------------------Helmets------------------------------------------
 ************************************************************************************************************/
   class HeadgearItem;
   class JLTS_CloneHelmetP2;
   class 187_Clone_Helmet : JLTS_CloneHelmetP2
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Trooper Helmet (P2)";
   	ace_hearing_protection = 5.0;
   	ace_hearing_lowerVolume = 0.25;
   	CBRN_protection = 1;
   	weaponPoolAvailable = 1;
   	hiddenSelections[]={"camo1"};
   	hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_helmet_co.paa"};
   	class ItemInfo : HeadgearItem
   	{
   		mass=30;
   		uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
   		hiddenSelections[]=
   		{
   			"camo1"
   		};
   		allowedSlots[]={801,901,701,605};
   		modelSides[]={6};
   		class HitpointsProtectionInfo
   		{
   			class Face
   			{
   				armor = 2;
   				hitpointName = "HitFace";
   				passThrough = 0.03;
   			};
   			class Head
   			{
   				armor = 2;
   				hitPointName = "HitHead";
   				passThrough = 0.03;
   			};
   			class Neck
   			{
   				armor = 2;
   				hitpointName = "HitNeck";
   				passThrough = 0.03;
   			};
   		};
   	};
   	allowedFacewear[] = {};
   };
   class 187_Clone_Helmet_Recruit : 187_Clone_Helmet
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Helmet (Recruit)";
   	hiddenSelectionsTextures[]={"MRC\JLTS\characters\CloneArmor\data\Clone_Helmet_P2_co.paa"};

   };
   class 187_Clone_Helmet_Airborne : 187_Clone_Helmet
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Clone Trooper Helmet (Airborne)";
   	picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
   	hiddenSelections[]=
   	{
   		"camo1"
   	};
   	hiddenSelectionsTextures[]=
   	{
   		"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_helmet_co.paa"
   	};
   	model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
   	subItems[]=
   	{
   		"JLTS_CloneNVG_spec"
   	};
   	class ItemInfo : HeadgearItem
   	{
   		mass = 30;
   		uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
   		hiddenSelections[]=
   		{
   			"camo1"
   		};
   		allowedSlots[]={801,901,701,605};
   		modelSides[]={6};
   		class HitpointsProtectionInfo
   		{
   			class Face
   			{
   				armor = 2;
   				hitpointName = "HitFace";
   				passThrough = 0.03;
   			};
   			class Head
   			{
   				armor = 2;
   				hitPointName = "HitHead";
   				passThrough = 0.03;
   			};
   			class Neck
   			{
   				armor = 2;
   				hitpointName = "HitNeck";
   				passThrough = 0.03;
   			};
   		};
   	};
   	allowedFacewear[] = {};
   };
   class 3as_P2_Pilot_helmet;
   class 187_Pilot_HelmetP2 : 3as_P2_Pilot_helmet
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Pilot Helmet (P2)";
   	picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
   	hiddenSelections[] = {"camo"};
	   hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pilot.paa"};
   	class ItemInfo : HeadgearItem
   	{
   		mass = 30;
   		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
   		hiddenSelections[] = {"camo"};
   		modelSides[] = {3,1};
   		class HitpointsProtectionInfo
   		{
   			class Face
   			{
   				armor = 8;
   				hitpointName = "HitFace";
   				passThrough = 0.03;
   			};
   			class Head
   			{
   				armor = 8;
   				hitPointName = "HitHead";
   				passThrough = 0.03;
   			};
   			class Neck
   			{
   				armor = 8;
   				hitpointName = "HitNeck";
   				passThrough = 0.03;
   			};
   		};
   	};
      ace_hearing_protection = 5.0;
      ace_hearing_lowerVolume = 0.35;
   	allowedFacewear[] = {};
   	subItems[] = {"187th_NVG_Chip"};
   };
   class 187_Pilot_HelmetP1 : 187_Pilot_HelmetP2
   {
   	author  = "PraetorPanda";
   	dlc             = "187th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[187th] Pilot Helmet (P1)";
   	model = "\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
   	hiddenSelections[] = {"camo"};
   	hiddenSelectionsTextures[] = {"3AS\3AS_Characters\Clones\Headgear\Textures\Phase1\Helmet_CO.paa"};
   	class ItemInfo : HeadgearItem
   	{
   		mass = 30;
   		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
   		hiddenSelections[] = {"camo"};
   		modelSides[] = {3,1};
   		class HitpointsProtectionInfo
   		{
   			class Face
   			{
   				armor = 8;
   				hitpointName = "HitFace";
   				passThrough = 0.03;
   			};
   			class Head
   			{
   				armor = 8;
   				hitPointName = "HitHead";
   				passThrough = 0.03;
   			};
   			class Neck
   			{
   				armor = 8;
   				hitpointName = "HitNeck";
   				passThrough = 0.03;
   			};
   		};
   	};
      ace_hearing_protection = 5.0;
      ace_hearing_lowerVolume = 0.35;
   	allowedFacewear[] = {};
   	subItems[] = {"187th_NVG_Chip"};

   };


/*class 187_Test_Helm: 187_Clone_Helmet // Test Helm for learning model creation with CT Galaxy (the current model is broken)
    {
            author      = "PraetorPanda";
            dlc		= "187th Aux Mod";
            scope       = 2;
            scopeCurator = 2;
            displayName = "[187th] Test Helmet (Test)";

            model = "\187th-aux\Data\Models\test7.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {""};
            class ItemInfo: HeadgearItem
            {
                    mass = 30;
                    uniformModel = "\187th-aux\Data\Models\test7.p3d";
                    hiddenSelections[] = {"camo"};
                    modelSides[] = {3,1};
                    class HitpointsProtectionInfo
                    {
                            class Face
                            {
                                    armor = 15;
                                    hitpointName = "HitFace";
                                    passThrough = 0.03;
                            };
                            class Head
                            {
                                    armor = 15;
                                    hitPointName = "HitHead";
                                    passThrough = 0.03;
                            };
                            class Neck
                            {
                                    armor = 15;
                                    hitpointName = "HitNeck";
                                    passThrough = 0.03;
                            };
                    };
            };
            allowedFacewear[] = {};
    };*/

//--------------------------------------------------------------------------------------------
//-----------------------------------Medical Stuff--------------------------------------------
//--------------------------------------------------------------------------------------------

            class ACE_Morphine;
            class CBA_MiscItem_ItemInfo;
            class ACE_fieldDressing;
            class ItemInfo;

            class 187th_Stimpack : ACE_Morphine
            {
            	scope = 2;
            	author = "PraetorPanda";
            	displayName = "[187th] Stimpack";
            	descriptionShort = "Inject for less pain";
            	descriptionUse = "Use instead of Morphine";
            	class ItemInfo : CBA_MiscItem_ItemInfo
            	{
            		mass = 1;
            	};
            };


            class 187th_Bacta_Spray : ACE_fieldDressing
            {
            	scope = 2;
            	displayName = "[187th] Bacta Spray (testing)";
            	class ItemInfo : CBA_MiscItem_ItemInfo
            	{
            		mass = 0.2;
            	};
            };

//--------------------------------------------------------------------------------------------
//-----------------------------------CIS Stuff------------------------------------------------
//--------------------------------------------------------------------------------------------

            class JLTS_E5;
            class JLTS_RG4D;
            class JLTS_E5S;
            class SWOP_E5C;
            class JLTS_DP23;
            class SWOP_b2gun;
            class WBK_Dutch_Vibro;
            class DpSword;
            class SWOP_DTL20BlasterRifle_Scoped;
            class SWOP_rg4dPistol;
            class WBK_lightsaber_sith;
            class JLTS_DW32S;
            class JLTS_212th_E5_shield;
            class 212th_E5A;

            class 187th_JLTS_E5 : JLTS_E5
            {
            	displayName="[187th] E-5";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_JLTS_RG4D : JLTS_RG4D
            {
            	displayName="[187th] RG-4D";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };
            class JLTS_RPS6;
            class 187th_CIS_JLTS_RPS6 : JLTS_RPS6
            {
            	displayName="[187th] RPS-6";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_JLTS_E5S : JLTS_E5S
            {
            	displayName="[187th] E-5S";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_SWOP_E5C : SWOP_E5C
            {
            	displayName="[187th] E5 C Heavy Blaster";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_JLTS_DP23 : JLTS_DP23
            {
            	displayName="[187th] DP-23";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_SWOP_b2gun : SWOP_b2gun
            {
            	displayName="[187th] B2 HandBlaster";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_SWOP_DTL20BlasterRifle_Scoped : SWOP_DTL20BlasterRifle_Scoped
            {
            	displayName="[187th] DTL20a Pulse rifle";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_SWOP_rg4dPistol : SWOP_rg4dPistol
            {
            	displayName="[187th] RG-4D Blaster Pistol";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_JLTS_DW32S : JLTS_DW32S
            {
            	displayName="[187th] DW-32S";
            	scope=1;
            	class LinkedItems
            	{
            	};
            };

            class 187th_JLTS_212th_E5_shield_JLTS_riot_shield_droid_attachment : JLTS_212th_E5_shield
            {
            	displayName="[187th] E5 (Shield)";
            	scope=1;
            	class LinkedItems
            	{

            	};
            };

            class 187th_212th_E5A_SWOP_E5_HoloScope : 212th_E5A
            {
            	displayName="[187th] E5A";
            	scope=1;
            	class LinkedItems
            	{
            		class LinkedItemsOptic
            		{
            			slot="CowsSlot";
            			item="SWOP_E5_HoloScope";
            		};
            	};
            };

            // adding AAT Side guns to make it work
            class CannonCore;
            class MGun;
            class LMG_RCWS;

            class 187th_3AS_AATRepeater: LMG_RCWS
            {
               displayName = "CIS Repeater";
               magazineReloadTime = 10;
               ballisticsComputer = 2;
               aiDispersionCoefY = 0.5;
               aiDispersionCoefX = 0.5;
               class GunParticles
               {
                  class effect1
                  {
                     positionName = "z_gunl_chamber";
                     directionName = "z_gunl_muzzle";
                     effectName = "MachineGunCloud";
                  };
                  class effect2
                  {
                     positionName = "z_gunr_chamber";
                     directionName = "z_gunr_muzzle";
                     effectName = "MachineGunCloud";
                  };
               };
               class manual: MGun
               {
                  displayName = "Heavy Repeater";
                  sounds[] = {"StandardSound"};
                  class BaseSoundModeType
                  {
                     closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20};
                     closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.316228,1,20};
                     soundClosure[] = {"closure1",0.5,"closure2",0.5};
                  };
                  class StandardSound: BaseSoundModeType
                  {
                     begin1[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin2[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin3[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin4[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin5[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin6[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin7[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin8[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin9[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     begin10[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
                     soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
                  };
                  soundContinuous = 0;
                  soundBurst = 0;
                  multiplier = 1;
                  reloadTime = 0.25;
                  dispersion = 0.0115;
                  aiRateOfFire = 1;
                  aiRateOfFireDistance = 10;
                  minRange = 0;
                  minRangeProbab = 0.01;
                  midRange = 1;
                  midRangeProbab = 0.01;
                  maxRange = 2;
                  maxRangeProbab = 0.01;
               };
               class close: manual
               {
                  soundBurst = 0;
                  aiBurstTerminable = 1;
                  showToPlayer = 0;
                  burst = 12;
                  burstRangeMax = 42;
                  aiRateOfFire = 0.5;
                  aiRateOfFireDispersion = 1;
                  aiRateOfFireDistance = 50;
                  minRange = 0;
                  minRangeProbab = 0.7;
                  midRange = 100;
                  midRangeProbab = 0.75;
                  maxRange = 300;
                  maxRangeProbab = 0.2;
               };
               class short: close
               {
                  aiBurstTerminable = 1;
                  showToPlayer = 0;
                  burst = 8;
                  burstRangeMax = 36;
                  aiRateOfFire = 1;
                  aiRateOfFireDispersion = 2;
                  aiRateOfFireDistance = 150;
                  minRange = 100;
                  minRangeProbab = 0.75;
                  midRange = 300;
                  midRangeProbab = 0.75;
                  maxRange = 600;
                  maxRangeProbab = 0.2;
               };
               class medium: close
               {
                  aiBurstTerminable = 1;
                  showToPlayer = 0;
                  burst = 8;
                  burstRangeMax = 30;
                  aiRateOfFire = 2;
                  aiRateOfFireDispersion = 2;
                  aiRateOfFireDistance = 300;
                  minRange = 300;
                  minRangeProbab = 0.75;
                  midRange = 600;
                  midRangeProbab = 0.65;
                  maxRange = 800;
                  maxRangeProbab = 0.1;
               };
               class far: close
               {
                  aiBurstTerminable = 1;
                  showToPlayer = 0;
                  burst = 8;
                  burstRangeMax = 12;
                  aiRateOfFire = 4;
                  aiRateOfFireDispersion = 4;
                  aiRateOfFireDistance = 800;
                  minRange = 800;
                  minRangeProbab = 0.65;
                  midRange = 1000;
                  midRangeProbab = 0.3;
                  maxRange = 1500;
                  maxRangeProbab = 0.05;
               };
               drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry.wss",1,1,10};
               magazines[] = {"3AS_500Rnd_ATT_RedPlasma"};
            };


// adding other files

    #include "RepublicWeapons.cpp"
    #include "CISWeapons.cpp"
}; // END
