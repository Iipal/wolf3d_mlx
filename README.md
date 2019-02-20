# Wolf3D
###### made by tmaluh __(\_ipal)__

[![Video preview](https://github.com/Iipal/Wolf3D-42/blob/master/screenshot.png)](https://youtu.be/s2rnZQIKDzw)
## Installation:

#### SDL2

__Ubuntu:__

```bash
sudo apt-get install libsdl2-dev
```
__Fedora:__

```bash
sudo yum install SDL2-devel
```
__MacOS__:

Use [this](http://lazyfoo.net/tutorials/SDL/01_hello_SDL/mac/index.php) instruction. (Or if you are student school42 - dont do anything, you already have installed SDL2).

## Compiling

Use [make](https://en.wikipedia.org/wiki/Makefile) for compiling all files.

When you have already installed SDL2 library you can use this simple rules:
- **make**: Compile all.
- **make clean**: Delete temporary files.
- **makde del**: Delete temporary Wolf3D files only(if you changed code use `make del && make` for re-compile only Wolf3D executable without libft).
- **make fclean**: Delete executable Wolf3D file & libft.
- **make re**: It's rules - **make fclean** & **make** in one.

## Usage:

```bash
./wolf3d maps/<map_name>.w3d
```

- `[W | S]` - Moving forward | backward (or Arrows `[UP | DOWN]`).
- `[A | D]` - Rotate left | right (also Arrows `[LEFT | RIGHT]` or `Mouse`).
- `[T]` - Toggle Textured\\Flat rendering method.
- `[M]` - Toggle mini-map drawing.
- `[F]` - Toggle Fog drawing.
- `[C]` - Switch Fog colors.
- `[R]` - Toogle torch drawing.
- `[ESC]` - Close Wolf3D.

#### MLX

If you are crazy and want to run this project using MLX library and without many features - follow this rules:

```bash
git clone https://github.com/Iipal/Wolf3D-42.git wolf3d
cd wolf3d
git checkout 5acec91
make
```
