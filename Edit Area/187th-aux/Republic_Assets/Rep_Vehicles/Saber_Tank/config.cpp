class CfgPatches
{
	class 187th_Saber_Tanks
	{
		name = "187th Saber Tanks";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_Saber_Tank","187th_Saber_Tank_Recon","187th_Saber_Tank_Super","187th_Saber_Tank_GL"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_saber_m1;
	class 3as_saber_m1Recon;
	class 3as_saber_super;
	class 3as_saber_m1G;

	class 187th_Saber_Tank : 3as_saber_m1
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-4]]], [0.1], [-0.5]]";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		canBeTransported = 1;
		/*class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret
			{
				startEngine=0;
				hideWeaponsGunner=1;
				showCrewAim=2;
				stabilizedInAxes=3;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				weapons[]=
				{
					"3AS_Sabre_Cannons",
					"SmokeLauncher",
					"Missiles_DAGR"
				};
				magazines[]=
				{
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"3AS_50Rnd_Sabre_mag",
					"12Rnd_PG_missiles"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				selectionFireAnim="zasleh2";
				flash="gunfire";
				animationSourceBody="obTurret";
				animationSourceGun="obGun";
				body="obTurret";
				gun="obGun";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="commanderview";
				gunnerOpticsEffect[]={};
				gunnerForceOptics=0;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
				missileBeg="missleEnd";
				missileEnd="missleBeg";
				gunnerInOpticsShowCursor=1;
				usepip=2;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				gunnerAction="Saber_Driver";
				forceHideGunner=1;
				outGunnerMayFire=0;
				gunnerInAction="Saber_Driver";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=2;
				viewGunnerInExternal=1;
				proxytype="CPGunner";
				gunnername="Gunner";
				commanding=1;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-45;
				maxOutTurn=90;
				initOutTurn=0;
				minTurn=-15;
				maxTurn=15;
				initTurn=0;
				minElev=-8;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				LODTurnedOut=1000;
				LODTurnedIn=1000;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				class HitPoints
				{
					class HitTurret
					{
						armor=1.2;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=1.2;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={800,400,200,1600};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={800,400,200,1600};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class Turrets
				{
				};
			};
			class Mainturret_top: MainTurret_bottom
			{
				body="MainTurret";
				gun="MainGun";
				proxyIndex=1;
				gunnername="Commander";
				animationSourceBody="Mainturret";
				animationSourceGun="Maingun";
				AnimationSourceHatch="HatchCommander";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-360;
				maxOutTurn=360;
				initOutTurn=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minElev=-15;
				maxElev=15;
				initElev=0;
				gunnerAction="Saber_Commander_OUT";
				gunnerInAction="Saber_Commander_In";
				forceHideGunner=0;
				outGunnerMayFire=1;
				ingunnerMayFire=1;
				stabilizedInAxes=3;
				ispersonturret=0;
				userpip=0;
				enabledByAnimationSource="HatchCommander";
				gunnerRightHandAnimName="HandR";
				gunnerLeftHandAnimName="HandL";
				personTurretAction="vehicle_turnout_1";
				memoryPointGun[]=
				{
					"usti hlavne3",
					"usti hlavne4"
				};
				weapons[]=
				{
					"3AS_Sabre_MG",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"SmokeLauncherMag"
				};
				memoryPointGunnerOptics="gunnerview";
				gunnerHasFlares=1;
				gunnerOutOpticsShowCursor=1;
				maxHorizontalRotSpeed=0.61500001;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.30000001;
						material=-1;
						name="Commander_Turret";
						visual="commander_turret";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="Commander_Gun";
						visual="Commander_Gun";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.60000002;
						radius=0.25;
					};
				};
				selectionFireAnim="zasleh3";
				class Turrets
				{
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={800,400,200,1600};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={800,400,200,1600};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				canHideGunner=0;
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=1;
				soundAttenuationTurret="HeliAttenuationGunner";
				isPersonTurret=1;
				ejectDeadGunner=1;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
				playerPosition=4;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				proxyIndex=2;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-65,95};
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				proxyIndex=3;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-95,65};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				gunnerName="$STR_A3_TURRETS_BENCH_R2";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				proxyIndex=4;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
			};
		};*/
	};

	class 187th_Saber_Tank_Recon : 3as_saber_m1Recon
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank Recon";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-4]]], [0.1], [-0.5]]";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_scout_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		
	};

	class 187th_Saber_Tank_Super : 3as_saber_super
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank Super";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-4]]], [0.1], [-0.5]]";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		/*class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_top
			{
				body="MainTurret_super";
				gun="Maingun_super";
				animationSourceBody="MainTurret_super";
				animationSourceGun="Maingun_super";
				weapons[]=
				{
					"3AS_Sabre_Cannons_Super",
					"Bantha_Z6"
				};
				magazines[]=
				{
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag",
					"Aux187_Z6_mag"
				};
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minElev=-10;
				maxElev=30;
				initElev=0;
				proxytype="CPGunner";
				gunnername="Gunner";
				proxyIndex=2;
				gunnerAction="Saber_Driver";
				gunnerInAction="Saber_Driver";
				forceHideGunner=1;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerRightHandAnimName="konec hlavne3";
				gunnerLeftHandAnimName="konec hlavne3";
				soundAttenuationTurret="HeliAttenuationGunner";
				memoryPointGun[]=
				{
					"usti hlavne3",
					"usti hlavne4"
				};
				memoryPointGunnerOptics="supersabergunnerview";
				gunnerOpticsEffect[]={};
				gunnerHasFlares=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};*/
	};
};