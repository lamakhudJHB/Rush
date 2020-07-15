/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushox.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:43:25 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/15 10:33:34 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void rush(int x, int y){
	int i;
	int j;

	for(i=0; i<y; i++){
		ft_putchar('\n');
		for(j=0; j<x; j++){
			if(i==0 && j==(x-1)){
				ft_putchar('O');
			}

			if(i==(y-1) && j==0){
				ft_putchar('O');
			}

			if(i==0 && j==0){
				ft_putchar('O');
			}

			if(i==(y-1) && j==(x-1)){
				ft_putchar('O');
			}

			else{
			ft_putchar('-');
			}
		}
	}
}

int main(){
	rush(5, 3);
	return (0);
}
