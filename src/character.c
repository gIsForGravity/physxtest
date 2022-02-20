/**
 * Filename: character.c
 * 
 * Description: characters and their functions
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#include <graphx.h>

#include "character.h"

#include "types/vec2.h"

#include "gfx/gfx.h"
#include "draw.h"

static void chr_oiram_draw(const void* self_ptr) {
    const Character* self = (Character*) self_ptr;

    if (self->anim_frame == 0)
        drw_DrawRLETCamera(oiram, self->pos);
}

const Character chr_oiram = {
    .to_IDrawable = {chr_oiram_draw, (void*) &chr_oiram},
    .anim_frame = 0,
    .pos = {0, 0},
};
