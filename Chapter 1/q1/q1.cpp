#include<stdio.h>

int main()
{
    int a=2147483640;
    for(int i=0;i<10;i++)
    {
        a+=1;
        //if(a<0)
        //    break;
        printf("%d\n",a);
    }
    return 0;
}
