#include<stdio.h>
int threeConsecutive(int a, int b, int c)
{
 if(a!=b && b!=c && a!=c)
 {
   if((a>b?a-b:b-a) == 1 && ((b>c?b-c:c-b) == 1) || (a>b?a-b:b-a) == 1 && ((a>c?a-c:c-a) == 1) || (a>c?a-c:c-a) == 1 && ((b>c?b-c:c-b) == 1))
   return 1;
  else
    return 0;
 }
  else
    return 0;
  
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result = threeConsecutive(a,b,c);
    if(result==1)
    printf("Yes");
    else
    printf("No");

}