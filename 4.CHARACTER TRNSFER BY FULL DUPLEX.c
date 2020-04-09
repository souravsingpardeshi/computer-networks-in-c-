1.c.CHARACTER TRNSFER BY FULL DUPLEX.

#include<stdio.h>
#include<conio.h>
#include <bios.h>
#include <conio.h>
#define COM1       0
#define SETTINGS ( 0x80 | 0x02 | 0x00 | 0x00)

void main()
{
	char ch,ch1;
	clrscr();
	bioscom(0,SETTINGS,COM1);
	while(!kbhit())
	{
		ch='y';

		bioscom(1,ch,COM1);

		printf("%c",ch);

		delay(10);

		ch1=bioscom(2,0,COM1);

		printf("%c",ch1);

		delay(10);
	}
	getch();
}
