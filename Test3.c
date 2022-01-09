#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a =700;
    int b =899;
    int *ptr=NULL;
    int *ptr2=&b;
    if (ptr2)
    {
        printf("pointer value exist %d\n", ptr2);
    }
    ptr=&a;
    if (ptr)
    {
        printf("pointer value exist %d", ptr);
    }
}