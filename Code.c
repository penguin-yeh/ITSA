#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kilo;
    while(scanf("%d",&kilo)!=EOF)
    {
        double mile;
        mile = kilo*1.6;
        printf("%.1f\n",mile);
    }
    return 0;
}
