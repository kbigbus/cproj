#include <stdio.h>

//Êä³ö1 ÊäÈë< ´íÎó2
int main()
{
    int a;

    fprintf(stdout, "standard output\n");  // printf("standard output\n")

    fprintf(stdout, "input a number:\n"); // printf("input some string:\n\n")
    fscanf(stdin, "%d", &a); // scanf("%s", &input)

    fprintf(stdout, "the number you input is : %d\n", a);
    return 0;
}
