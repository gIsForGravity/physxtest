/**
 * Filename: character.h
 * 
 * Description: characters!
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef CHARACTER_H
#define CHARACTER_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "types/vec2.h"
#include "types/basetypes.h"
#include "types/IDrawable.h"

typedef struct Character {
    IDrawable to_IDrawable;
    vec2 pos;
    u24 anim_frame;
} Character;

void chr_setcharacter_oiram(Character* oiram_chr);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CHARACTER_H */
