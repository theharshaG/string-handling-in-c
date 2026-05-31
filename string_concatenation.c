#include <stdio.h>
#include <string.h>

int main()
{
    char first[30] = "Harsha ";
    char last[] = "Gowda";

    strcat(first, last);

    printf("%s", first);

    return 0;
}
