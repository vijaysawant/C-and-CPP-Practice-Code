/*
Program to accept string from user till user not enters \n (enter button)
*/
#include <stdio.h>
#include <cstring>

int main(int argc, char *argv[])
{
    char buffer[50];
    printf("Enter string : ");
    scanf("%[^\n]s", &buffer);
    printf("You entered : %s", buffer);
    printf("Size of buffer is : %d\n", sizeof(buffer));
    printf("length of buffer : %d\n", strlen(buffer));

    return 0;
}
/*
Output:
-------
$ g++ .\accepting_string.c
$ .\a.exe
Enter string : India
You entered : IndiaSize of buffer is : 50
length of buffer : 5
*/