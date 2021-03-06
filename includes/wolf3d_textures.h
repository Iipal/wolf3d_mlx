/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d_textures.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 10:23:44 by tmaluh            #+#    #+#             */
/*   Updated: 2019/03/14 19:15:08 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_TEXTURES_H
# define WOLF3D_TEXTURES_H

# define MAX_TEXTURES   8
# define TEXWALL1       "resources/wall_textures/wall1.bmp"
# define TEXWALL2       "resources/wall_textures/wall2.bmp"
# define TEXWALL3       "resources/wall_textures/wall3.bmp"
# define TEXWALL4       "resources/wall_textures/wall4.bmp"
# define TEXWALL5       "resources/wall_textures/wall5.bmp"
# define TEXWALL6       "resources/wall_textures/wall6.bmp"
# define TEXWALL7       "resources/wall_textures/wall7.bmp"
# define TEXWALL8       "resources/wall_textures/wall8.bmp"
# define TEXFLOOR       "resources/floor_and_sky/floor.bmp"
# define TEXSKY         "resources/floor_and_sky/sky.bmp"
# define TFLOOR         MAX_TEXTURES
# define TSKY           TFLOOR + 1
# define TEX            env->textures
# define MAX_TORCH      6
# define TORCH1         "resources/torch/torch1.bmp"
# define TORCH2         "resources/torch/torch2.bmp"
# define TORCH3         "resources/torch/torch3.bmp"
# define TORCH4         "resources/torch/torch4.bmp"
# define TORCH5         "resources/torch/torch5.bmp"
# define TORCH6         "resources/torch/torch6.bmp"
# define TORCH          env->torch

# define FPS_FONT       "resources/04B_03__.TTF"

# define FLOORNSKY      "resources/floor_and_sky/floor_and_sky.bmp"
# define FSTARTX        0
# define FSTARTY        0
# define FENDX          64
# define FENDY          64
# define SSTARTX        64
# define SSTARTY        0
# define SENDX          128
# define SENDY          64

# define FPOS   (h->ftex.y + FSTARTY) * 128 + (h->ftex.x + FSTARTX)
# define SPOS   (h->ftex.y + SSTARTY) * 128 + (h->ftex.x + SSTARTX)

# define WALLTEXTURES       "resources/wall_textures/wall_textures.bmp"
# define WALLS_BLOCK_SIZE   64
# define WT_XSIZE   env->walls->data->surf->w
# define WT_YSIZE   env->walls->data->surf->h

#endif
