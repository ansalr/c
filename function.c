#include<cs50.h>
#include<stdio.h>

int get_size(void);
void print_grid(int size);


int main(void)
{
    int n = get_size();

    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("size : ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i+=1)
    {
        for (int j = 0; j < size; j+=1)
        {
            printf("#");
        }
        printf("\n");
    }
}
