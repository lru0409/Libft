/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:59:26 by rolee             #+#    #+#             */
/*   Updated: 2024/03/20 13:26:21 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	idx;

	if (fd < 0)
		return ;
	idx = 0;
	while (s[idx])
	{
		write(fd, &s[idx], 1);
		idx++;
	}
}
