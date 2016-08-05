/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_paramtry5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 15:54:57 by wfung             #+#    #+#             */
/*   Updated: 2016/08/04 16:06:00 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int counter, char **vector)
{
	int i;

	i = 0;
	if (counter < 2)
		ft_putchar('\n');
	else
	{
		while (*vector[1] != '\0')
			ft_putchar(*(vector[1]++));
		ft_putchar('\n');
	}
	return (0);
}
