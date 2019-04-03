/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:35:59 by tmaluh            #+#    #+#             */
/*   Updated: 2019/04/04 01:44:31 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(string s, void (*f)(uint32_t, string))
{
	uint32_t	i;

	if (!s || !f)
		return ;
	i = 0;
	if (s)
		while (s[i])
		{
			f(i, &s[i]);
			++i;
		}
}
