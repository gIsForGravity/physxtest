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
#include "character.h"
#include "error.h"
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
    for (u8 i = 0; i < sizeof(idrawables) / sizeof(IDrawable*); i++) {
        dbg_printf("begin(): %i is %p\n", i, idrawables[i]);
    }
    dbg_printf("gfx stuff\n");
    gfx_Begin();
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
    dbg_printf("fill screenn\n");
    /*gfx_FillScreen(0x14);*/
    gfx_FillScreen(0);

    for (u8 i = 0; i < sizeof(idrawables) / sizeof(IDrawable*); i++) {
        dbg_printf("draw(): %i is %p\n", i, idrawables[i]);
    }

    dbg_printf("for loop\n");
    dbg_printf("draw(): %p\n", idrawables[1]);
    for (u8 i = 0; i < sizeof(idrawables) / sizeof(IDrawable*); i++) {
        dbg_printf("iteration %i\n", i);
        dbg_printf("draw(): %i is %p\n", i, idrawables[i]);
        IDrawable* drawable = idrawables[i];

        if (NULL != drawable) {
            dbg_printf("draw(): %i is %p\n", i, idrawables[i]);
            dbg_printf("draw(): drawable is %p\n", drawable);
            dbg_printf("drawing!\n");
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

    for (u8 i = 0; i < sizeof(idrawables) / sizeof(IDrawable*); i++) {
        if (NULL == idrawables[i]) {
            dbg_printf("begin() %i is %p\n", i, idrawables[i]);
            dbg_printf("set %i\n", i);
            idrawables[i] = &p1.to_IDrawable;
            dbg_printf("begin() %i is %p\n", i, idrawables[i]);
            dbg_printf("begin() 1 is %p\n", idrawables[1]);
            return;
        }
    }

    dbg_printf("In begin():\n  every IDrawable in idrawables used\n");
    err_fatalcrash(); /* you should not reach here */
}

void end() {
    gfx_End();
}
