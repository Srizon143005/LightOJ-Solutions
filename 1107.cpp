#include <stdio.h>

int main()
{
    int T,M;
    scanf("%d",&T);
    int i,j;
    for(i =0; i<T; i++)
    {
        int x1,x2,y1,y2,a,b;

        printf("Case %d:\n",i+1);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&M);
        for(j=0; j<M; j++)
        {
            scanf("%d%d",&a,&b);

            if((a>=x1&&a<=x2)&&(b>=y1&&b<=y2))
            {
                printf("Yes\n");
            }
            else
                printf("No\n");


        }
    }
    return 0;
}
