/* add c headers if necessary*/
#include <stdio.h>
void insert(int a[],int n,int val);
int main()
{
    int i,n,val;
    scanf("%d",&n);//size of array
    int a[n];
    for(i=0;i<n; i++)//array scanning
    scanf("%d",&a[i]);
    scanf("%d",&val);//value to be inserted
    insert(a,n,val);
    return 0;
} 
void insert(int a[],int n,int val)
{ 
    int b[n+1];
    int i,index=0;
    for(i=0;i<n+1;i++)
    {
        scanf("%d",&b[i]);
        b[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        //printf("i=%d\n",i);
        //printf("val=%d",val);
        if(a[i] < val)
        {
            b[i] = a[i];
            //printf("i=%d\n",i);
        }

        if(a[i] < val && a[i+1] > val)
        index = i+1;

        if(a[i] > val)
        {
            //printf("i=%d\n",i);
            b[i+1] = a[i];
        }
    }
    // printf("%d\n",index);
    b[index] = val;
    for(i=0;i<n+1;i++)
    printf("%d ",b[i]);
}