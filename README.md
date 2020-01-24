# Alpha Centauri Shim

This is a shim that adds some missing functions that alpha centauri
(Linux native loki games version) requires to run with modern libraries.

## Usage

Build the shim:

    $ make

Run the game with the shim:

    $ LD_PRELOAD=/path/to/smacshim.so ./smac.dynamic

## Disclaimer

This isn't heavily tested. There may be other functions missing I have
not yet stumbled up on.
