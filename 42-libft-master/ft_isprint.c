/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:17:12 by muilhan           #+#    #+#             */
/*   Updated: 2022/10/04 17:17:16 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int
	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
