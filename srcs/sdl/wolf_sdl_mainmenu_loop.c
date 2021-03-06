/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf_sdl_mainmenu_loop.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:02:25 by tmaluh            #+#    #+#             */
/*   Updated: 2019/04/10 11:08:04 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	add_press_keys(t_env *env)
{
	if (env->sdl->event.key.keysym.sym == SDLK_DOWN
	&& !env->menu->is_selector_start)
		Mix_PlayChannel(-1, env->sfx->selector_err, 0);
	else if (env->sdl->event.key.keysym.sym == SDLK_UP
		&& env->menu->is_selector_start)
		Mix_PlayChannel(-1, env->sfx->selector_err, 0);
	else if (env->sdl->event.key.keysym.sym == SDLK_UP)
	{
		env->menu->is_selector_start = true;
		Mix_PlayChannel(-1, env->sfx->selector, 0);
	}
	else if (env->sdl->event.key.keysym.sym == SDLK_DOWN)
	{
		env->menu->is_selector_start = false;
		Mix_PlayChannel(-1, env->sfx->selector, 0);
	}
	else if (env->sdl->event.key.keysym.sym == SDLK_q)
		env->isr->is_play_music = !env->isr->is_play_music;
}

void		wolf_sdl_mainmenu_loop(t_env *env, bool *exit_)
{
	IFDO(env->sdl->event.type == SDL_QUIT, *exit_ = true);
	if (env->sdl->event.type == SDL_KEYDOWN)
	{
		if (env->sdl->event.key.keysym.sym == SDLK_ESCAPE)
			*exit_ = true;
		else if (env->sdl->event.key.keysym.sym == SDLK_RETURN)
		{
			if (env->menu->is_selector_start)
			{
				Mix_VolumeMusic(env->sfx->bg_volume);
				wolf_sdl_rendering_loop(env);
			}
			else
				*exit_ = true;
		}
		else
			add_press_keys(env);
	}
}
