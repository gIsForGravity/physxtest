/**
 * Filename: error.c
 * 
 * Description: functions to call when errors happen
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */
#include <graphx.h>

#include "error.h"

void err_fatalcrash() {
    gfx_End();
    abort();
}
