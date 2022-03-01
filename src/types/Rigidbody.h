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

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct Rigidbody {
    vec2 pos;
    vec2 vel;
} Rigidbody;


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TYPES_RIGIDBODY_H */
