#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5]={0},i = 0;


    for(i = 0; i < 5;i++)
    {
        printf("\n\t Array Element %d = %d.",i+1,Num[i]);
    }

    getch();
    return 0;
}
