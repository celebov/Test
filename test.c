/*
 * test.c
 * 
 * Copyright 2016 celebov <celebov@celebov-Satellite-A300>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <curses.h>  //include <conio.h> equivalent on Linux
#include <stdlib.h>

int main(int argc, char **argv)
{  
	//int a,b,sum;
	int number;
	system("clear"); //clrscr() 
	printf("Content-type:text/plain\n\n");
	printf("Hello PC\a\a\a \n");
	printf("Type a number \? \n");
	scanf("%d",&number);
	printf("\a\aThe number you typed is %d \n",number);
	
	int count = 0;
	printf("Number of arguments to main function is %d\n",argc);
	for(count=0; count<argc; count++){
	printf("Argument number %d is %s\n",count,argv[count]);
	}
	
	return 0;
}
