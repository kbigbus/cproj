#include <stdio.h>

//获取参数个数 并循环输出参数
int main(int argc, char* argv[])
{
    printf("the number of arg is :%d\n", argc);
    int i;
    for(i=0; i<argc; i++) {
        printf("the arg %d is : %s\n", i, argv[i]);
    }
    printf("hello!\n");
    return 0;
}
