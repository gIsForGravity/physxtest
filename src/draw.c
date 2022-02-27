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

void drw_DrawRLETCamera(const gfx_sprite_t* sprite, vec2 pos) {
    dbg_printf("drw_DrawRLETCamera");
    /*pos.y -= camera_pos.y;
    pos.x -= camera_pos.x;

    pos.y *= -1;
    pos.y += 120;
    pos.x += 160;

    pos.x *= 100;
    pos.y *= 100;

    gfx_Sprite(sprite, (i24) pos.x, (i24) pos.y);*/
}

vec2 drw_GetCameraPos() {
    return camera_pos;
};

void drw_SetCameraPos(vec2 pos) {
    camera_pos = pos;
};
