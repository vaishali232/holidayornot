#include <stdio.h>

int main()
{
    
    char s[1000];
    int n;
    scanf("%s%n",s,&n);
    for(int i=0;i<i+2;i++)
    {
        if(s[i]=='S')
        {
            if(s[i+1]=='u')
            {
                printf("yes");
                break;
            }
            else if(s[i+1]=='a')
            {
                printf("yes");
                break;
            }
        }
        else
        {
            printf("no");
            break;
        }
    }
    
       
    
    
}
