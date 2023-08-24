#include<cs50.h>
#include<stdio.h>

int main(void)
{
    const int n = get_int("size of block : ");
    for (int i = 0; i < n; i+=1)
    {
        for (int j = 0; j < n; j+=1)
        {
            printf("#");
        }
        printf("\n");
    }
}
