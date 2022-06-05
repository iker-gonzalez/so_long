<h1 align="center">
	👾 So Long
</h1>

<p align="center">
	<b><i>Development repo for 42cursus' so_long project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/iker-gonzalez/42_cursus"><b>42cursus repo</b></a>.
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/iker-gonzalez/so_long?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/iker-gonzalez/so_long?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/iker-gonzalez/so_long?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/iker-gonzalez/so_long?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/iker-gonzalez/so_long?color=brightgreen" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
  <span> · </span>
	<a href="#game">Game</a>
</h3>

---

## 🗣️ About

> Small top-down, 2D game with textures, sprites, and basic gameplay.

For detailed information, refer to the [**subject of this project**](https://github.com/iker-gonzalez/42_cursus/blob/main/_PDFs/en.subject_so_long.pdf)


 ## 🛠️ Usage
To start the game you need to run the command `make` on the root directory.
This will compile the executable file `so_long`.
Then, you will need to create some random maps:

```
git clone https://github.com/eLeKaJota/so_long_map_generator
cd so_long_map_generator
./map_generator
```

One you have the executable and the maps, run `./so_long map_files/map.ber` or any map of your choice.


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


### Controls
You can use `AWSD` to move `UP`, `DOWN`, `LEFT`, `RIGHT` respectively.  
For restart the game press `ESC` or click on the red cross of window.
To win the game its necessary pick up all collectibles and pass for the exit.

