/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sma <sma@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 23:45:41 by sma               #+#    #+#             */
/*   Updated: 2021/01/22 19:51:04 by sma              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		i++;
	}
	return (i);
}
