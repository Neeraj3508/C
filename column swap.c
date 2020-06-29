#include <stdio.h>
int main()
{
    int t;//test cases
    scanf("%d",&t);
    while(t!=0)
    {
        int r,c;//array size ; rows and columns respectively
        scanf("%d %d",&r,&c);
        int i,j,a[r][c];
        for(i=0;i<r;i++)//2d array scanning
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int m,q,temp;
        scanf("%d %d",&m,&q);//scanning codes to be swapped
        printf("array before swap\n");
        for(i=0;i<r;i++)//printing 2d array
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        
        for(i=0;i<r;i++)
        {
            temp = a[i][m];
            a[i][m] = a[i][q];
            a[i][q] = temp;
        }
        printf("\n array after swap\n");
        for(i=0;i<r;i++)//printing 2d array
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }


        t--;
    }

    return 0;
}