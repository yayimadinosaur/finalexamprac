/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:21:23 by wfung             #+#    #+#             */
/*   Updated: 2016/08/04 19:52:28 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		aff_a(av[1]);
	return (0);
}
