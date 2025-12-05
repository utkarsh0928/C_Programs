#include<stdio.h>
#include<conio.h>
void printhello(int count);

int main()
{

	clrscr();
	printhello(5);
	getch();
	return 0;
}

void printhello(int count)
{
	if(count==0)
	{
		return;
	}
	printf("Hello!\n");
	printhello(count-1);
}