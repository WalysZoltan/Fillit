/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:28:34 by wzoltan           #+#    #+#             */
/*   Updated: 2019/09/16 19:42:20 by wzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i])
	{
		s1[i + len] = s2[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}
