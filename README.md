# Loki games Shim

This is a shim that adds missing functions that some old Linux native games
released by [Loki Software](https://en.wikipedia.org/wiki/Loki_Entertainment)
requires to run on modern systems.

## Tested games
- Sid Meier's Alpha Centauri
- Civilization: Call to Power
- Descent 3
- Kohan: Immortal Sovereigns

## Requirements
Make sure you have a 32-bit capable C compiler.

You are most likely running a Linux distribution on a shiny 64 bits CPU, but the binaries you are trying to run are build for the classic 32 bits PC architecture. In the Debian/Ubuntu world, you will need to install the *gcc-multilib* package.

## Usage

Build the shim:

    $ make

Run the game with the shim:

    $ LD_PRELOAD=/path/to/lokishim.so ./smac.dynamic

## Disclaimer

This isn't heavily tested. There may be other functions missing I have
not yet stumbled up on.
