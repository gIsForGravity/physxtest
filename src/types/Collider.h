/**
 * Filename: types/Collider.h
 * 
 * Description: collider thingamajig
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef TYPES_COLLIDER_H
#define TYPES_COLLIDER_H

/* Includes */
#include "vec2.h"
#include "stdbool.h"
#include "AABB.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct Collider {
    AABB box;
    u8 layer;
} Collider;


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TYPES_COLLIDER_H */
