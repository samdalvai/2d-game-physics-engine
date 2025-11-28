# 2d-game-physics-engine

A basic 2d Game Phisics Engine made from scratch by following the Pikuma course using C++ and SDL2.
Visit [pikuma.com](https://pikuma.com/) for more information on the course.

# Libraries and dependencies

In order for the project to run you need to install the following packages on your machine:

- **Make** -> for building and running the game
- **sdl2**, **sdl2_image**, **sdl2_gfx** -> libraries to manage rendering of graphics

## Installation on linux based systems

```shell
sudo apt install build-essential libsdl2-dev libsdl2-image-dev libsdl2-gfx-dev
```

## Installation on macOS

```shell
brew install sdl2 sdl2_image sdl2_gfx
```

# How to run the game

## Build

```shell
make build
```

> Note: use `make build-apple-silicon` on newer MacOS devices

## Run

```shell
make run
```

## Clean game executable file

```shell
make clean
```
