/*
Accept string from user and print number of capital characters
*/
#include <stdio.h>
#include <string.h>

int cap_count(const char * str)
{
    int itr = 0, cnt = 0;
    if (str == NULL)
    {
        return cnt;
    }
    while(str[itr] != '\0')
    {
        if(str[itr] >= 'A' && str[itr] <= 'Z')
        {
            cnt += 1;
        }
        itr++;
    }
    return cnt;
}
int main()
{
    char buffer[50];
    int count = 0;
    printf("Enter string : ");
    scanf("%[^\n]s",&buffer);
    printf("Entered string is : %s\n",buffer);
    count = cap_count(buffer);
    printf("No. of capital chars : %d",count);
    return 0;
}
/*
Output
------
Enter string : How Are You Today..?
Entered string is : How Are You Today..?
No. of capital chars : 4
PS D:\VS-code\CPP-Practice-Code>
*/