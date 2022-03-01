/**
 * Filename: types/AABB.h
 * 
 * Description: AABB collision detection
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef TYPES_AABB_H
#define TYPES_AABB_H

/* Includes */
#include "vec2.h"
#include "stdbool.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct AABB {
    vec2 pos;
    vec2 size;
} AABB;

bool AABB_is_colliding(AABB*, AABB*);
bool AABB_is_inside(vec2* point, AABB* box);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TYPES_AABB_H */
