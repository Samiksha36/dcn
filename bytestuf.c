#include<stdio.h>
#include<string.h>
int main()
{
    int che[20],bit[30],i,j,data,count,n;
    printf("Enter  size :");
    scanf("%d",&n);
    printf("Enter the data : ");
    for(i=0; i<n; i++)
        scanf("%d",&che[i]);
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if(che[i]==1)
        {
            bit[j]=che[i];
            for(data=i+1; che[data]==1 && data<n && count<=5; data++)
            {
                j++;
                bit[j]=che[data];
                count++;
                if(count==5)
                {
                    j++;
                    bit[j]=0;
                }
                i=data;
            }
        }
        else
        {
            bit[j]=che[i];
        }
        i++;
        j++;
    }

    for(i=0; i<j; i++)
    printf("%d",bit[i]);
    return 0;
}
