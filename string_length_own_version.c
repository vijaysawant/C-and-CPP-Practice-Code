/*
Implementation strlen function which will return length of string
*/
#include <stdio.h>
int my_strlen(const char * str)
{
    int i = 0;
    if (str == NULL)
    {
        return 0;
    }
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char arr[] = "India";
    char *pstr = "factors";
    char raw_str[] = {'D','E','M','O',' ','S','T','R','I','N','G','\0'};
    int str_len = my_strlen(arr);
    printf("Length of '%s' = %d\n", arr, str_len);
    
    str_len = my_strlen(pstr);
    printf("Length of '%s' = %d\n", pstr, str_len);

    str_len = my_strlen(raw_str);
    printf("Length of '%s' = %d\n",raw_str, str_len);
     
    return 0;
}
/*
Output
------
Length of 'India' = 5
Length of 'factors' = 7
Length of 'DEMO STRING' = 11
*/