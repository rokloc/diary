//コールバック関数
#include <stdio.h>

void func1()
{
    printf("func1\n");
}

//関数ポインタにfunc1のアドレスを渡している
void func2(void (*callback)())
{
    printf("func2\n");
    callback();
}




int main()
{
    func2(func1);
}