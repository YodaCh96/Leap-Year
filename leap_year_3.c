/*
Filename: leap_year_3.c
Author: Ioannis Christodoulakis
Creation Date: 25.07.2023
*/

#include <stdio.h>

int main()
{
	int etos;
	
	printf("Dose etos: ");
	scanf("%d",&etos);
	
	if (((etos%4==0)&&(etos%100!=0))||(etos%400==0))
		printf("Einai disekto!\n");
	else
		printf("Den einai disekto!\n");
	
	return 0;
}
