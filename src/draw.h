/**
 * Filename: draw.h
 * 
 * Description: stuff related to drawing sprites and whatnot
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef DRAW_H
#define DRAW_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <graphx.h>
#include "types/vec2.h"

void drw_DrawRLETCamera(const gfx_sprite_t* sprite, vec2 pos);
/*void drw_DrawRLETCamera(vec2 pos);*/
vec2 drw_GetCameraPos(void);
void drw_SetCameraPos(vec2 pos);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* DRAW_H */
