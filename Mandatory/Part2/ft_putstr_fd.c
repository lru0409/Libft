/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:59:26 by rolee             #+#    #+#             */
/*   Updated: 2024/03/29 13:37:38 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	idx;

	if (fd < 0 || !s)
		return ;
	idx = 0;
	while (s[idx])
	{
		write(fd, &s[idx], 1);
		idx++;
	}
}
