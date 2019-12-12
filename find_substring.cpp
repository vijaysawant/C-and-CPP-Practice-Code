/*
Program to find substring inside main string without using built-in functions
Ex-
substring = "for"
main_string = "performance"

Output-
Index = 3
*/
#include <stdio.h>
#include <string.h>

int find_substring(char *sub_string, char *main_string)
{
    int sub_string_len = strlen(sub_string);
    int main_string_len = strlen(main_string);
    for (int i = 0; i < main_string_len; i++)
    {
        for(int j = 0; j < sub_string_len; j++)
        {
            if ((main_string[i] == '\0') and (j != (sub_string_len-1)))
            {
                return -2;
            }
            if(main_string[i] == sub_string[j])
            {
                if(j == (sub_string_len-1))
                {
                    return (i - j);
                }
                i++;
                continue;
            }
            else
            {
                break;
            }
        }
    }
    return -1;
}
int main()
{    
    int res = 0;
    res = find_substring("for", "performance");
    printf("Index = %d\n",res);
    return 0;
}