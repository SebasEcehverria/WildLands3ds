# Wildlands3DS

This repository contains a prototype for Wildlands3DS, a never-ending creature-collecting wilderness RPG inspired by Animal Crossing, Pokémon, and The Legend of Zelda: Breath of the Wild.

## Project Description
Wildlands3DS is being developed as a Nintendo 3DS homebrew game. The player explores a wild island, catches creatures, builds relationships with villagers, and will eventually grow a settlement. This prototype establishes the project structure and a minimal build.

## Required Tools
- devkitPro/devkitARM with libctru and citro2d installed for Nintendo 3DS development.
- C compiler support via devkitARM.
- A 3DS console with homebrew launcher or the Citra emulator for testing.

## Build Instructions
1. Install devkitPro and devkitARM following the instructions at https://devkitpro.org/.
2. Clone this repository.
3. Open a terminal in the `WildLands3ds` directory.
4. Run `make` to build the game. This produces `Wildlands3DS.3dsx` in the `build` directory.

## Run Instructions
- On Citra: Open the generated `.3dsx` file in Citra.
- On a Nintendo 3DS with homebrew launcher: Copy `Wildlands3DS.3dsx` to the SD card's `3ds` folder and launch from the homebrew menu.

## Controls
- D-Pad/Circle Pad: move.
- A: interact/confirm.
- B: cancel/run.
- Start: quit.

## Current Features
- Placeholder program that initializes the console and displays a test message.

## Planned Features
- Top-screen overworld map with player movement.
- Random creature encounters.
- Turn-based battle system with catching mechanics.
- NPCs with simple personality and dialogue.
- Save system.
- Town building and more creatures in future milestones.
