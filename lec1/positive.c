#include<cs50.h>
#include<stdio.h>


int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("% i\n", i);

}

//prompt user for positive integer
int get_positive_int(void)
{
    int n;
    do
    {
        n=get_int("positive integer: ");

    }
    while(n<1);
    return n;
}