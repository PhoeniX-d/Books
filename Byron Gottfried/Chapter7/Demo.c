#include<stdio.h>

void fun();

int main()
{
    fun();
    fun();
    fun();
    return 0;
}

void fun()
{
    static int i = 10;
    i++;
    printf("Inside Fun %d\n", i);
}

void gun()
{
    printf("Inside gun %d\n", i);
}