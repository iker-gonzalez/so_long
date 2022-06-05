# SO_LONG

![map](map_files/map.ber.png)

</center>
## Description  

Small top-down, 2D game with textures, sprites, and basic gameplay


## Game
To play this game you can use any map of your choice as long follow the following rues:

* The extension need be `.ber`
* Its must be rectangular, surrounded by wall `1`
* Must have only one exit, only one player and at least one collectible
* Characters allowed:

|  Character  |          Object          |
|:-----------:|:------------------------:|
|     *1*     | wall                     |
|     *0*     | Empty                    |
|     *C*     | collectible              |
|     *E*     | exit                     |
|     *P*     | Player starting position |
|     *V*     | Enemy starting position  |

In folder [map_files](map_files) have some examples of maps.

### Controls
You can use `AWSD` to move `UP`, `DOWN`, `LEFT`, `RIGHT` respectively.  
For restart the game press `ESC` or click on the red cross of window.
To win the game its necessary pick up all collectibles and pass for the exit.

### How execute the game
To start the game you need to run the command `make` on the root directory.
This will compile the executable file `so_long`, then run `./so_long map_files/map.ber` or any map of your choice.
