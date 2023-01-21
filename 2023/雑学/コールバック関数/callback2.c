#include <stdio.h>

int func1()
{
    printf("1\n");
    return 1;
}

int func2()
{
    printf("2\n");
    return 1;
}

int func3()
{
    printf("3\n");
    return 1;
}

int main()
{
    int (*funcTable[])() = {
        func1,
        func2,
        func3,
        NULL
    };
    int i = 0;
    while(funcTable[i] != NULL)
    {
        if(funcTable[i]() != 1)
        {
            break;
        }
        i++;
    }
}