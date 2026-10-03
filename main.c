#include <stdio.h>

int main()
{
    int number = 75;
    int *ptr = NULL;

    if (ptr == NULL)
    {
        printf("Pointer is NULL.\n");
        printf("Assigning the address of number...\n");

        ptr = &number;
    }

    printf("Value = %d\n", *ptr);

    return 0;
}
