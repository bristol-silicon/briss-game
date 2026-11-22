/*
 * briss_regs.h: register map for the BriSS peripherals.
 *
 * Written BY HAND from each peripheral repo's SPEC.md (section 3).
 * SPEC.md is the official version; if they disagree, SPEC.md wins
 * and this file is wrong.
 *
 * Owner: AND, Drivers + header sub-group.
 * Base addresses come from the slot map in briss-docs/system-spec.md (OR).
 */
#ifndef BRISS_REGS_H
#define BRISS_REGS_H

#include <stdint.h>

#define BRISS_REG32(base, off) (*(volatile uint32_t *)((base) + (off)))
#define BRISS_REG8(base, off)  (*(volatile uint8_t  *)((base) + (off)))

/* ---- Base addresses: TBD by OR (one per slot) ---- */
/* #define BRISS_GAMEPAD_BASE  0x0000000 */

/* ---- periph-gamepad (NOR): copy from its SPEC.md §3 ---- */
/* #define GAMEPAD_BUTTONS  BRISS_REG8(BRISS_GAMEPAD_BASE, 0x00) */

/* ---- periph-rotary (NOR) ---- */
/* ---- periph-score (NOR) ---- */
/* ---- periph-video (XOR) ---- */
/* ---- periph-audio (NAND) ---- */
/* ---- periph-random (NOT) ---- */
/* ---- periph-collision (NOT) ---- */
/* ---- periph-maths (AND) ---- */

#endif /* BRISS_REGS_H */
