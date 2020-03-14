#include<stdio.h>

int main()
{
    char *str[] = {"Frogs", "Do", "Not", "Die","vikash", "They", "Croak!"};
    printf("%d, %d", sizeof(str), strlen(str[0]));
    return 0;
}
