#include<stdio.h>
#include<conio.h>

int DATA[20] = {22, 65, 1, 99, 32, 17, 74, 49, 33, 2};
int N = 10;
int LINEAR(int);

int main()
{
    int i, ITEM, LOC;

    printf("Values contained in DATA[10] = ");
    for(i=0; i<10; i++)
        printf(" %d", DATA[i]);

    printf("\n\n Enter the ITEM to be searched = ");
    scanf("%d",&ITEM);

    LOC = LINEAR(ITEM);

    if(LOC == -1)
        printf("\n\n ITEM is not present in DATA[10]");
    else
        printf("\n\n The location of ITEM in DATA[10] is = %d",LOC);

    return 0;
}
int LINEAR(int I)
{
    int L;
    DATA[N]=I;
    L=0;

    while(DATA[L] !=I)
    L=L+1;
    if(L==N)
        L=-1;

    return(L);

}
