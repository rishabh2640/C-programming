#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int main()
{
    int abinterger = 3;
    int sos;
    printf("enter the input\n");
    scanf("%d", &sos);
    printf(" this was the upgraded input = %d\n", sos + 3);
    printf("the size of taken by short int is %d\n", abinterger > 2 ? sizeof(short int) : abinterger);

    printf("The final value is %d.", add(5, 4));
    return 0;
}
int add(int a, int b)
{
    return a * b;
}
