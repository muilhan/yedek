/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:19:49 by muilhan           #+#    #+#             */
/*   Updated: 2022/08/30 21:58:32 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}
/*
 int main()
 {
    ft_print_numbers();
    return (0);
 }*/
