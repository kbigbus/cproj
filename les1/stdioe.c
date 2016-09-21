#include <stdio.h>

int main()
{
    char* inputs;

    fprintf(stdout, "standard output\n");  // printf("standard output\n")

    fprintf(stdout, "input some string:\n"); // printf("input some string:\n\n")
    fscanf(stdin, "%s", inputs); // scanf("%s", &input)

    fprintf(stdout, "the string you input is : %s\n", inputs);
    return 0;
}
