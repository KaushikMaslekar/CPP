#include <stdio.h>
#include <conio.h>

int main()
{
    int r,c;
    r = 1;
    while(r<=5)
    {
        c = 1;
        while(c<=5)
        {
            printf(" * ");
            c++;
        }
        printf("\n");
        r++;
    }
    getch();
}