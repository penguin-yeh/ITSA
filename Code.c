#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        int dis;
        dis = x*x + y*y;
        if(dis<=10000)
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }
    return 0;
}
