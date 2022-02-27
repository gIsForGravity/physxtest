/**
 * Filename: character.c
 * 
 * Description: characters and their functions
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#include <graphx.h>
#include <debug.h>

#include "character.h" 

#include "types/vec2.h"

#include "gfx/gfx.h"
#include "draw.h"

static void chr_oiram_draw(const void* self_ptr) {
    dbg_printf("chr_oiram_draw\n");
    const Character* self = (Character*) self_ptr;

    if (self->anim_frame == 0) {
        dbg_printf("checked anim_frame\n");
        drw_DrawRLETCamera(oiram, self->pos);
    }
}

void chr_setcharacter_oiram(Character* oiram_chr) {
    *oiram_chr = (Character) {
        .to_IDrawable = {chr_oiram_draw, (void*) oiram_chr},
        .anim_frame = 0,
        .pos = {0, 0},
    };
}
