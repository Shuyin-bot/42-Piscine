/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 04:13:35 by sqian             #+#    #+#             */
/*   Updated: 2025/08/07 01:38:04 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char mahdi, int fd)
{
	write(fd, &mahdi, 1);
}

/*
#include <fcntl.h>

int	main(void)
{
	int fd;
	char file = "testout.txt" 
	fd = open(file, O_WRONLY);	
	ft_putchar_fd('s');
	return (0);
}*/
