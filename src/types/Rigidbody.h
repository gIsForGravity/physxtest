/**
 * Filename: Rigidbody.h
 * 
 * Description: some math functions
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef TYPES_RIGIDBODY_H
#define TYPES_RIGIDBODY_H

#include "basetypes.h"
#include "vec2.h"
#include "Collider.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct Rigidbody {
    Collider collider;
    vec2 vel;
    f32 mass;
    f32 inverse_mass;
    f32 gravity_force;
} Rigidbody;


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TYPES_RIGIDBODY_H */
