/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:35:59 by tmaluh            #+#    #+#             */
/*   Updated: 2019/04/04 12:54:23 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(string s, void (*f)(unsigned int, string))
{
	uint32_t	i;

	i = 0;
	if (!s || !f)
		return ;
	if (s)
		while (s[i])
		{
			f(i, &s[i]);
			++i;
		}
}
