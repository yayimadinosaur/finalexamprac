/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 18:50:19 by wfung             #+#    #+#             */
/*   Updated: 2016/08/03 22:25:41 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char c;

	c = 'A';
	while (c <= 'Z')
	{
		if (c % 2 == 0)
			ft_putchar(c + 32);
		else
			ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
