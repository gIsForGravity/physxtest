/**
 * Filename: scene.h
 * 
 * Description: scene stuff also not used yet
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef SCENE_H
#define SCENE_H

/* Includes */
#include <graphx.h>
#include "types/basetypes.h"
#include "types/vec2.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct scene {
    vec2 camera_pos;
    u8 bg_color;
} scene_t;

void scene_SetCurrentScene(scene_t);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* SCENE_H */
