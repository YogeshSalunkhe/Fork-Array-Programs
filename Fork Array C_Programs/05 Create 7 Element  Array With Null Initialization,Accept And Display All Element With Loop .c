#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[7]={0},i;

    printf("\n\t Enter All Element => \n");

    for(i = 0; i < 7; i++)
    {
        printf("\n\t Enter Element %d => ",(i+1));
        scanf("%d",&Num[i]);
    }

    printf("\n\t Press Any Key To Clear Screen => ");
    getch();

    system("cls");

    printf("\n\t Press Any Key To Display All Element =>  \n");

    getch();

    for(i = 0; i < 7; i++)
    {
        printf("\n\t Element %d = %d",(i+1),Num[i]);
    }

    getch();
    return 0;

}
