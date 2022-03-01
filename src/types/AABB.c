/**
 * Filename: AABB.c
 * 
 * Description: AABB collision detection
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#include "AABB.h"

#define pos2x(aabb) (aabb->pos.x + aabb->size.x)
#define pos2y(aabb) (aabb->pos.y + aabb->size.y)

bool AABB_is_colliding(AABB* one, AABB* two) {
    return one->pos.x < pos2x(two) 
        && one->pos.y < pos2y(two)
        && two->pos.x < pos2x(one) 
        && two->pos.y < pos2y(one);
};

bool AABB_is_inside(AABB* box, vec2* point) {

};
