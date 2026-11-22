# BriSS game

The game that runs on the BriSS chip's TinyQV RISC-V CPU, written in C. Owned by **AND**.

| Path | What it is |
|---|---|
| `include/briss_regs.h` | Register addresses for every peripheral, **copied by hand** from each peripheral's `SPEC.md` (Drivers + header sub-group) |
| `src/main.c` | The game loop |

Built with the [TinyQV SDK](https://github.com/MichaelBell/tinyQV-sdk). OR will add the build and run instructions once the toolchain is set up.

If a peripheral's `SPEC.md` changes, the same pull request (or a linked one) must update `briss_regs.h`.
