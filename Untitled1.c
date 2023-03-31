#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count =0;
    int i=1;
    while(i<=n)
    {
        int a;
        scanf("%d",&a);
        if(a<0)
        {
            count++;
        }
        i++;
    }
    printf("%d\n",count++);

    return 0;
}
