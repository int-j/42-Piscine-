/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:08:21 by mbamou            #+#    #+#             */
/*   Updated: 2021/09/26 12:43:10 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void    ft_putchar(char c) //a function that does not return anything, and takes a character as parameter.
{
            write(1, &c, 1);  //write function
}

// we add this part to test our code, since void function does not return anything, 
//therefore we need a main function to test our code if it works and check out the output of it.

int    main(void) // int or char would both give the expected outcome without errors, and main(void) means that we can only give one parameter to our function.
{
        ft_putchar('h');
        ft_putchar('e');
        ft_putchar('l');
        ft_putchar('l');
        ft_putchar('o');
        ft_putchar('1');
         ft_putchar('\n'); // the \n to make new line 
}
