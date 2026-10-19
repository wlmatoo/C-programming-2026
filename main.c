#include <stdio.h>

int main(void)
{
    int char_size = sizeof(char);
    int int_size = sizeof(int);
    int float_size = sizeof(float);
    int double_size = sizeof(double);

    printf("%d %d %d %d\n",
        char_size, int_size,
        float_size, double_size);
    return 0;
}