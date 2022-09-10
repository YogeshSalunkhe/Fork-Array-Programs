#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size],i,Cnt = 0;

    for( i = 0; i < size; i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);

        Cnt++;
    }

    printf("\n\t Element In Given Array = %d.",Cnt);

    getch();
    return 0;
}
