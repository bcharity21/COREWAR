/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 14:20:32 by bcharity          #+#    #+#             */
/*   Updated: 2019/05/09 13:17:17 by bcharity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char*)ft_memalloc(size + 1);
	if (s)
	{
		s[size] = '\0';
		return (s);
	}
	return (NULL);
}
