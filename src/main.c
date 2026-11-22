#include <stdint.h>
#include "briss_regs.h"

/* Game logic sub-group: replace these stubs as peripherals reach v0.1. */

static void init(void)   { /* reset score, place player, start music */ }
static void update(void) { /* read inputs, move things, check collisions */ }
static void draw(void)   { /* write sprite positions and score */ }

int main(void)
{
    init();
    for (;;) {
        /* TODO: wait for the start of a frame (video peripheral) */
        update();
        draw();
    }
}
