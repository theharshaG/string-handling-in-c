#include<stdio.h>

int main()
{
    char name[20];
    int count = 0;

    printf("Enter name: ");
    scanf("%s", name);

    while(name[count] != '\0')
    {
        count++;
    }

    printf("Length = %d", count);

    return 0;
}
