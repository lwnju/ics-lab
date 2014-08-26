#include<stdio.h>
int sum(int N)
{
    int i,PartialSum;
    PartialSum = 0;
    for(i=1;i<=N;i++)
      PartialSum+=i*i*i;
    return PartialSum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s;
    s=sum(n);
    printf("%d",s);
    return 0;
}
