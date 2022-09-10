#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i,No[size],Src;

    for(i = 0;i < size;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);
    }

    printf("\n\n\t Enter Element For Searching => ");
    scanf("%d",&Src);

    for(i = 0;i < size;i++)
    {
        if(No[i] == Src)
        {
            printf("\n\t Given Element Found At %d Location.",i+1);
        }
    }

    getch();
    return 0;

}
