//
// mission.h
//
// WHICH PLANE?????????
//                            action action max    mission mission    jump num   {step   step  step}       
//                            time   cmd    alt    purpose name           steps  head    alt   durr
//                            (ms)          (ft)                      (ft)       (deg)   (ft)  (ms)
#ifdef P_TESTBED
#if 0
const planeMission mission = {5000, A_LOCK, 6000, O_HOLD, "M_TESTBED4", 0, 4,      5,    5800,  30000,      // multi step
                                                                                  90,    3000,  30000,
                                                                                   5,    3000,  30000,
                                                                                  50,    5800,  0           // 
                             };
#else                           
const planeMission mission = {40000, A_LOCK, 6000, O_HOLD, "M_TESTBED1", 0, 1,     0,    5800,  0};           // 1 step 
#endif
#endif 
#ifdef P_RIOTIII
#if 0
const planeMission mission = {40000, A_TEMP, 6000, O_HOLD, "M_RIOTIII", 0, 4,      5,    5800,  30000,      // multi step
                                                                                  90,    3000,  30000,
                                                                                   5,    3000,  30000,
                                                                                  50,    5800,  0           // 
                             };
#else     
// very simple (02/17/2020) climb 25 feet and same course!!!
// at real test: (10000, A_LOCK, ... ... 20000, change 2020-06-22 to 8000, 2020-06-22bm 15000
const planeMission mission = {15000, A_TEMP, 6200, O_HOLD, "M_RIOTIII-1", 25, 1,      DYN_VAL,    DYN_VAL, 0}; // 5800, 0};          // <===== !!
#endif
#endif
#ifdef P_RIOT3B
error error error
#endif
#ifdef P_RIOT4
error error error
#endif
#ifdef P_RIOTX
const planeMission mission = {10000, A_LOCK, 6000, O_HOLD, "M_RIOTX", 0, 1,      35,    5600, 0};          // <===== !!
#endif      
