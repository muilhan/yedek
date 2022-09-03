/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:05:11 by muilhan           #+#    #+#             */
/*   Updated: 2022/08/30 22:00:23 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	if (a < 0)
	{
		write(1, "N", 1);
	}
	else if (a >= 0)
	{
		write(1, "P", 1);
	}	
}	
/*
 int main()
 {
    ft_is_negative(-8);
    return 0;
 }*/
