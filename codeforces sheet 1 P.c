#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>=10)
{
    n = n/10;
}
    //printf("first digit %d\n",n);
    if(n%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
 
 
    return 0;
}
