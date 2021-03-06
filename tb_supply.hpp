class TacBF
{
	class Supply
	{
	// Generates cargo IDs (More effecient broadcasting for these items + their ammo)
	staticWeapons[] = {"RHS_M2StaticMG_MiniTripod_D", "RHS_M2StaticMG_D", "rhsgref_cdf_b_reg_d30_at", "rhs_KORD_high_MSV", "rhs_KORD_MSV", "rhsgref_ins_DSHKM", "rhsgref_ins_DSHKM_Mini_TriPod", "RHS_M252_D", "rhs_2b14_82mm_msv", "RHS_TOW_TriPod_D", "rhs_Metis_9k115_2_msv", "rhs_SPG9M_MSV", "rhsgref_ins_SPG9", "rhs_D30_at_msv", "rhs_D30_msv", "RHS_ZU23_MSV", "RHS_M119_D", "RHS_AGS30_TriPod_MSV", "RHS_MK19_TriPod_D", "rhs_Igla_AA_pod_msv", "RHS_Stinger_AA_pod_D", "rhs_Kornet_9M133_2_msv"};
	
		class CargoCollections
		{
			// West Statics
			class statics_westLight {
				transportClear = 1;
				cargo[] = {
					{"RHS_M2StaticMG_MiniTripod_D", 2, 4},
					{"RHS_M2StaticMG_D", 2, 4},
					{"TB_Box_West_Mines_F", 2, 0},
					{"ICE_emptySandbagsTimberStack", 10,0}
				};
			};
			class statics_west {
				transportClear = 1;
				cargo[] = {
					{"RHS_M2StaticMG_MiniTripod_D", 3, 6},
					{"RHS_M2StaticMG_D", 3, 6},
					{"RHS_TOW_TriPod_D", 1, 2},
					{"TB_Box_West_Mines_F", 4, 0},
					{"rhsgref_cdf_b_reg_d30_at", 0, 5},
					{"ICE_emptySandbagsCrate_supply", 3,0}
				};
			};
			class statics_westHeavy {
				transportClear = 1;
				cargo[] = {
					{"RHS_M2StaticMG_MiniTripod_D", 4, 8},
					{"RHS_M2StaticMG_D", 4, 8},
					{"RHS_TOW_TriPod_D", 2, 4},
					{"RHS_M252_D", 1, 3},
					{"TB_Box_West_Mines_F", 6, 0},
					{"ICE_emptySandbagsCrate_supply", 6,0}
				};
			};
			
			// East Statics
			class statics_eastLight {
				transportClear = 1;
				cargo[] = {
					{"rhs_KORD_MSV", 2, 4},
					{"rhs_KORD_high_MSV", 2, 4},
					{"TB_Box_East_Mines_F", 2, 0},
					{"ICE_emptySandbagsTimberStack", 10,0}
				};
			};
			class statics_east {
				transportClear = 1;
				cargo[] = {
					{"rhs_KORD_MSV", 3, 6},
					{"rhs_KORD_high_MSV", 3, 6},
					{"rhs_Metis_9k115_2_msv", 1, 2},
					{"TB_Box_East_Mines_F", 4, 0},
					{"ICE_emptySandbagsCrate_supply", 3,0}
				};
			};
			class statics_eastHeavy {
				transportClear = 1;
				cargo[] = {
					{"rhs_KORD_MSV", 4, 8},
					{"rhs_KORD_high_MSV", 4, 8},
					{"rhs_Metis_9k115_2_msv", 2, 4},
					{"rhs_2b14_82mm_msv", 1, 3},
					{"TB_Box_East_Mines_F", 6, 0},
					{"ICE_emptySandbagsCrate_supply", 6,0}
				};
			};
			
			// RES Statics
			class statics_resLight {
				transportClear = 1;
				cargo[] = {
					{"rhsgref_ins_DSHKM_Mini_TriPod", 2, 4},
					{"rhsgref_ins_DSHKM", 2, 4},
					{"TB_Box_East_Mines_F", 2, 0},
					{"ICE_emptySandbagsTimberStack", 10,0}
				};
			};
			class statics_res {
				transportClear = 1;
				cargo[] = {
					{"rhsgref_ins_DSHKM_Mini_TriPod", 3, 6},
					{"rhsgref_ins_DSHKM", 3, 6},
					{"rhs_SPG9M_MSV", 1, 2},
					{"TB_Box_East_Mines_F", 4, 0},
					{"ICE_emptySandbagsCrate_supply", 3,0}
				};
			};
			class statics_resHeavy {
				transportClear = 1;
				cargo[] = {
					{"rhsgref_ins_DSHKM_Mini_TriPod", 4, 8},
					{"rhsgref_ins_DSHKM", 4, 8},
					{"rhs_SPG9M_MSV", 2, 4},
					{"rhs_2b14_82mm_msv", 1, 3},
					{"TB_Box_East_Mines_F", 6, 0},
					{"ICE_emptySandbagsCrate_supply", 6,0}
				};
			};
			
			//FO Statics
			class rds_westFO {
				transportClear = 1;
				cargo[] = {
					{"RHS_M2StaticMG_D", 2, 4},
					{"RHS_M2StaticMG_MiniTripod_D", 2, 4},
					{"RHS_TOW_TriPod_D", 1, 0},
					{"TB_Box_West_Mines_F", 1, 0},
					{"ICE_emptySandbagsCrate_supply", 2,0}
				};
			};
			class rds_eastFO {
				transportClear = 1;
				cargo[] = {
					{"rhs_KORD_high_MSV", 2, 4},
					{"rhs_KORD_MSV", 2, 4},
					{"rhs_Metis_9k115_2_msv", 1, 0},
					{"TB_Box_East_Mines_F", 1, 0},
					{"ICE_emptySandbagsCrate_supply", 2,0}
				};
			};
		};

		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG 
			{
				crateCollection = "rds_westFO";
				crateMass = 1750; 
			};
			class ICE_ForwardOutpost_container_EastMG 
			{
				crateCollection = "rds_eastFO";
				crateMass = 1750; 
			};
		};
	};
};