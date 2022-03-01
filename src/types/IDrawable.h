/**
 * Filename: types/IDrawable.h
 * 
 * Description: interface for things that can draw (usually 
 * themselves)
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef TYPES_IDRAWABLE_H
#define TYPES_IDRAWABLE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct IDrawable {
    void (*draw)(const void* self);
    void* self;
} IDrawable;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TYPES_IDRAWABLE_H */
