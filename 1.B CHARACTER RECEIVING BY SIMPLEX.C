// 1-A a)CHAR RECEIVING BY SIMPLEX
#include<stdio.h>
//#include <bios.h>

//#include <conio.h>

#define COM1 0

#define SETTINGS ( 0x80 | 0x02 | 0x00 | 0x00)

int main()
{
	char ch;
	//clrscr();

	bioscom(0,SETTINGS,COM1);

	while(!kbhit())
	{
		ch=bioscom(2,0,COM1);

		delay(50);

		printf("%c",ch);
	}
	//getch();
	return 0;
}

OUTPUT:-
TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
