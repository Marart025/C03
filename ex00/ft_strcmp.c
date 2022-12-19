/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:44:56 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/11/02 12:02:56 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned int	result;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
	int	result;
	result = ft_strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);
	result = ft_strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	return (0);
}
