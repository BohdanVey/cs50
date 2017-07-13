#include <cs50.h>
 #include <stdio.h>
 
int main(void)
{
    string s = GetString();
 
     for (int i = 0; i < 6; i++)
     {
       printf("%c\n", s[i]); 
    }
}