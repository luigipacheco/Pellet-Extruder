// gigabotxl.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "gigabot.h"

#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
  #define STRING_CONFIG_H_AUTHOR "(GBXL V4.x.x - Marlin 1.1.8)"

  #undef  SHOW_CUSTOM_BOOTSCREEN
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS

  #define X_BED_SIZE   590
  #define Y_BED_SIZE   760
  #define Z_MAX_POS    609//900
#endif

