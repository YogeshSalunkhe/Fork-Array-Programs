#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size],i,Sum = 0;

    for(i = 0;i < size;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);

        Sum+=No[i];
    }

    printf("\n\t Addition Of Given Array Elements = %d",Sum);

    getch();
    return 0;
}
