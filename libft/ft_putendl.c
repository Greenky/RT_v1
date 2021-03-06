/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmazurok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:29 by vmazurok          #+#    #+#             */
/*   Updated: 2017/11/07 09:52:30 by vmazurok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	int i;

	i = -1;
	if (s)
	{
		while (s[++i])
			write(1, &s[i], 1);
		write(1, "\n", 1);
	}
}
