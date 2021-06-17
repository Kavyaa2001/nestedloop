#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=(2*i)+1;j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}
