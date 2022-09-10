#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5],i;

    for(i = 0;i < 5;i++)
    {
        printf("\n\t Element %d = %d ",i+1,Num[i]);
    }

    getch();
    return 0;
}
