#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Harsha";
    char dest[20];

    strcpy(dest, source);

    printf("%s", dest);

    return 0;
}
