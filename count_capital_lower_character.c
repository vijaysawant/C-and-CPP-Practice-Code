/*
Accept string from user and print number of capital characters
*/
#include <stdio.h>
#include <string.h>

int count_cap_low_chars(const char * str, int & cap_cnt, int & low_cnt)
{
    int itr = 0;
    cap_cnt = low_cnt = 0;
    if (str == NULL)
    {
        return 0;
    }
    while(str[itr] != '\0')
    {
        if(str[itr] >= 'A' && str[itr] <= 'Z')
        {
            cap_cnt += 1;
        }
        else if(str[itr] >= 'a' && str[itr] <= 'z')
        {
            low_cnt += 1;
        }
        itr++;
    }
    return 1;
}
int main()
{
    char buffer[50];
    int ret, cap_count, low_count;
    ret = cap_count = low_count = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",&buffer);
    
    printf("Entered string is : %s\n",buffer);
    ret = count_cap_low_chars(buffer, cap_count, low_count);
    if(ret == 0)
    {
        printf("Cant not find capital and small char count\n");
    }
    printf("No. of Capital chars : %d\n",cap_count);
    printf("No. of Lower chars : %d\n",low_count);
    return 0;
}
/*
Output
------
PS D:\VS-code\CPP-Practice-Code> g++ .\count_capital_lower_character.c
PS D:\VS-code\CPP-Practice-Code> .\a.exe
Enter string : India Is My Country..!
Entered string is : India Is My Country..!
No. of Capital chars : 4
No. of Lower chars : 12
PS D:\VS-code\CPP-Practice-Code>
*/