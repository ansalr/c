#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n = 0;
    do
    {
        n = get_int("Enter positive Value : ");
    }
    while (n<1);
    {
        for(int i = 0; i < n; i+=1)
        {
            for (int j = 0; j<n; j+=1)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
