#include<stdio.h>
#include<conio.h>
int calculatePerc(int science,int math,int sanskrit);

int main()
{
int sc=98;
int math=95;
int sanskrit=99;
clrscr();
printf("percentage is:%d",calculatePerc(sc,math,sanskrit));
getch();
return 0;
}

int calculatePerc(int science,int math,int sanskrit)
{
return((science+math+sanskrit)/3);
}