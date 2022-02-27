/**
 * Filename: types/vec2.h
 * 
 * Description: Contains a 2D vector type
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef VEC2_H
#define VEC2_H

/* Includes */
#include "basetypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct vector2 {
    float x, y;
} vec2;

/**
 * @brief Adds **first** and **second**
 * 
 * @param first 
 * @param second 
 * @return vec2 
 */
vec2 vec2_add(vec2 first, vec2 second);

/**
 * @brief Subtracts **first** and **second**
 * 
 * @param first 
 * @param second 
 * @return vec2 
 */
vec2 vec2_sub(vec2 first, vec2 second);

/**
 * @brief Multiplies **first** and **second**
 * 
 * @param first 
 * @param second 
 * @return vec2 
 */
vec2 vec2_mul(vec2 first, vec2 second);

/**
 * @brief Divides **first** and **second**
 * 
 * @param first 
 * @param second 
 * @return vec2 
 */
vec2 vec2_div(vec2 first, vec2 second);

/**
 * @brief Returns the magnitude of **vec**. vec2_sqrmag() is much faster.
 * 
 * @param vec 
 * @return vec2 
 */
f32 vec2_mag(vec2 vec);

/**
 * @brief Returns the square magnitude of **vec**. Much faster than vec2_mag().
 * 
 * @param vec 
 * @return vec2 
 */
vec2 vec2_sqrmag(vec2 vec);

/**
 * @brief Returns the normalized vector of **vec**.
 * 
 * @param vec 
 * @return vec2 
 */
vec2 vec2_norm(vec2 vec);

#ifdef __cplusplus
}
#endif

#endif /* VEC2_H */
