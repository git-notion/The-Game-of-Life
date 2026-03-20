# Conway's Game of Life
This is a cellular automaton that is played on a 2D square grid. Each square (or "cell") on the grid can be either alive or dead, and they evolve according to the following rules:

    Any live cell with fewer than two live neighbours dies (referred to as underpopulation).
    Any live cell with more than three live neighbours dies (referred to as overpopulation).
    Any live cell with two or three live neighbours lives, unchanged, to the next generation.
    Any dead cell with exactly three live neighbours comes to life.

The initial configuration of cells can be created by a human, but all generations thereafter are completely determined by the above rules. The goal of the game is to find patterns that evolve in interesting ways – something that people have now been doing for over 50 years.

## Demo 
<p align="center">
  <img src="https://raw.githubusercontent.com/git-notion/The-Game-of-Life/a055ff7b77cf5568f18d245a994019f2426a3393/Game%20of%20Life%202026-03-20%2020-51-14.gif" width="600"/>
</p>

### Libraries used:
1. Raylib https://www.raylib.com/
2. Vector

### How to use: 
1. Press ENTER to start the simulation.
2. Press SPACEBAR to stop the simulation.
3. Press F KEY to increase the FPS and S KEY to decrease the FPS.

### Structure
1. Header Files:
   1. grid.hpp
   2. simulation.hpp
2. Source Files:
   1. main.cpp
   2. grid.cpp
   3. simulation.cpp

## References:
https://www.youtube.com/watch?v=daFYGrXq0aw&list=PLwR6ZGPvjVOSRywn9VCQ3yrRVruxzzuo9&index=13&t=181s

https://visualstudio.microsoft.com/
