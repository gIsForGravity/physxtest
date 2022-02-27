/**
 * Filename: draw.h
 * 
 * Description: stuff related to drawing sprites and whatnot
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef DRAW_H
#define DRAW_H

/* Includes */
#include <graphx.h>
#include "types/vec2.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void drw_DrawRLETCamera(const gfx_rletsprite_t* sprite, vec2 pos);
vec2 drw_GetCameraPos(void);
void drw_SetCameraPos(vec2 pos);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* DRAW_H */
