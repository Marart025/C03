/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:03:26 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/11/02 12:17:37 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <cstring.h>
#include <iostream>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	display(char *lhs, char *rhs, int result, int count)
{
	if(result > 0)
		cout << rhs << " precedes " << lhs << endl;
	else if (result < 0)
		cout << lhs << " precedes " << rhs << endl;
	else
		cout << "First " << count << " characters of " << lhs << " and " << rhs << " are same" << endl;
}
int	main(void)
{
    char	lhs[] = "Armstrong";
    char	rhs[] = "Army";
    int result;
    result = ft_strncmp(lhs,rhs,3);
    display(lhs,rhs,result,3);
    result = ft_strncmp(lhs,rhs,4);
    display(lhs,rhs,result,4);
    return 0;
}
