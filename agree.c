#include <cs50.h>
#include <stdio.h>


int main(void)
{
    char c = get_char("Do you agree ? ");

    if (c=='y' || c=='Y')
    {
        printf("yes i agree !\n");
    }
    else if (c =='N' || c =='n')
    {

        printf("not agree !\n");
    }
}