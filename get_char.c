#include <stdio.h>

int main(void)
{
    // get_char value
    if ((get_char()) != EOF == 0)
    {
        printf("It's Zero-chan!!");
    }
    else if ((get_char()) != EOF == 1)
    {
        printf("It's One-chan!!");
    }
    else
    {
        printf("ERROR!!");
    }
    return 0;
}