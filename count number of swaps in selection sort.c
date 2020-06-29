#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t!=0)
  {
    int n,i,min,index,count=0,j,temp;
    scanf("%d",&n);//size of array
    int a[n];
    for(i=0;i<n;i++)//array scanning
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      min=a[i];
      for(j=i;j<n;j++)
      {
        if(a[j] <= min)
        {
          min = a[j];
          index = j;
        }
      }
      //printf("i=%d index=%d\n",i,index);
      temp = a[i];
      a[i] = a[index];
      a[index] = temp;
      if(index!=i)
      count++;
    }
    printf("%d\n",count);
    t--;
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}