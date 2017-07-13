
 #include <stdio.h>
 #include <string>
#include <string.h>
  #include <iostream>
using namespace std;
int main(void)
 {
	char s[1000];
    cin>>s;
 int n=strlen(s);
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
           printf("%c", s[i] - ('a' - 'A'));
        }
        else
       {
            printf("%c", s[i]);
        }
    }
    printf("\n");
cin>>s;
}