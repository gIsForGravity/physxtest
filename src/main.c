/*
 *--------------------------------------
 * Program Name: physxtest
 * Author: Gravity
 * License: Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 * Description: physics test
 *--------------------------------------
*/

#include <graphx.h>
#include <stdbool.h>
#include <keypadc.h>
#include <debug.h>
#include "types/basetypes.h"
#include "types/AABB.h"
#include "character.h"
#include "util/error.h"
#include "util/macros.h"
#include "gfx/gfx.h"

/* Function declarations */
void begin(void);
void end(void);
bool step(void);
void draw(void);

/* Static vars */
/* interfaces */
static IDrawable *idrawables[16] = {NULL};
/* vars */
static Character p1 = {0};

int main(void)
{
    dbg_printf("running testballs");
    dbg_printf("before begin\n");
    begin();
    dbg_printf("gfx stuff\n");
    gfx_Begin();
    gfx_SetPalette(palette, sizeof_palette, 0);
    gfx_SetDrawBuffer();

    dbg_printf("about to step first time\n");
    while (step()) {
        dbg_printf("drawing\n");
        draw();
        dbg_printf("after draw\n");
        gfx_SwapDraw();
        gfx_Wait();
    }
    end();
    return 0;
}

void draw(void) {
    gfx_FillScreen(0x14);

    for (u8 i = 0; i < sizeof(idrawables) / sizeof(IDrawable*); i++) {
        IDrawable* drawable = idrawables[i];

        if (NULL != drawable) {
            drawable->draw(drawable->self);
        }
    }
}

bool step() {
    kb_Scan();
    return !(kb_Data[6] & kb_Clear);
}

void begin() {
    chr_setcharacter_oiram(&p1);

    util_insertfirst(idrawables, sizeof(idrawables) / sizeof(IDrawable*), &p1.to_IDrawable);

    dbg_printf("In begin():\n  every IDrawable in idrawables used\n");
    err_fatalcrash(); /* you should not reach here */
}

void end() {
    gfx_End();
}
