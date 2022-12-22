#include<stdlib.h>
#include <stdio.h>
int checking(char *data)
{
    int i=0,num;
    while(data[i]!='\0')
    {
        num=data[i];
        if(num=='0' || num=='1')
        {
            i++;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
void evenparity(char data[])
{
    int i=0,count=0;
    while(data[i]!='\0')
    {
        if (data[i]=='1')
          count++;
          i++;
    }
    if(count%2==1)
        data[i]='1';
    else
        data[i]='0';
    data[i+1]='\0';
    printf("Data :%s",data);
}
void oddparity(char data[])
{
    int i=0,count=0;
    while(data[i]!='0')
    {
        if(data[i]==1)
           count++;
           i++;
    }
    if(count%2==1)
        data[i]='1';
    else
        data[i]='0';
    data[i+1]='\0';
    printf("Data :%s",data);
}
int main()
{
    char data[50];
    int check,choice;
    printf("Enter the data : ");
    scanf("%s",data);

    check=checking(&data[0]);
    if(check==1)
    {
        printf("\nEnter data is wrong ");
    }
    printf("\n 1.Even parity");
    printf("\n 2.odd parity");
    scanf("%d",&choice);
    if(choice==1)
         evenparity(data);
     else
         oddparity(data);
    return 0;
}
