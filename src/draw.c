/**
 * Filename: draw.c
 * 
 * Description: draws stuff yaya
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#include <graphx.h>
#include <debug.h>
#include "draw.h"
#include "types/basetypes.h"
#include "types/vec2.h"

static vec2 camera_pos = {0, 0};

void drw_DrawRLETCamera(const scene_t* scene, const gfx_rletsprite_t* sprite, vec2 pos) {
    dbg_printf("drw_DrawRLETCamera");
    pos.y -= scene->camera_pos.y;
    pos.x -= scene->camera_pos.x;

    pos.x *= 100;
    pos.y *= 100;

    pos.y *= -1;
    pos.y += 120;
    pos.x += 160;

    dbg_printf("drw_DrawRLETCamera");

    gfx_RLETSprite(sprite, (i24) pos.x, (i24) pos.y);
}
