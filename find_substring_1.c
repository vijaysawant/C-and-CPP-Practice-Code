#include<stdio.h>
#include<string.h>
typedef const char * mystring;

int substring_index(mystring mainstr, mystring substr)
{
    int main_len = strlen(mainstr); // 11
    int sub_len = strlen(substr);   // 3

    for(int i = 0; i < main_len; i++)
    {
        int j;
        for(j = 0; j < sub_len; j++)
        {
            if(mainstr[i+j] != substr[j])
            {    
                break;
            }
        }
        if (j == sub_len)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    mystring mainstr = "performance";
    mystring substr = "for";
    int index = substring_index(mainstr, substr);
    if (index == -1)
        printf("\nstring not found");
    else
        printf("\nstring found at index : %d", index);

    return 0;
}