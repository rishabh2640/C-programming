#include <stdio.h>
#include <stdlib.h>

float average(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'f'};

    for (int i = 0; i < 5; i++)
    {
        printf("please enter the no. %d\n", i);
        scanf("%s", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the value is %c\n", arr[i]);
    }

    // printf("\n\n%c\n\n", arr[3]);
    // printf("the average value of 100 and 99 is %f", average(100, 599));
}