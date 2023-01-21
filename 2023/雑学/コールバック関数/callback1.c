#include <stdio.h>

void func()
{
    printf("Hello\n");
}


int main()
{
    void (*pfunc)(); //関数ポインタ宣言
    pfunc = func;

    pfunc();
}