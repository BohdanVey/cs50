#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <iostream>
void Cesar(char input[],char key[])
{
	for (int i = 0; i< strlen(input); i++)
	{
	    if(input[i]!=' '){
		input[i] += (key[i%strlen(key)] -18) % 26;
		if (input[i]>'z'){
		   input[i]+='a'-'z'-1; 
		}
			if (input[i]>'Z' && input[i]<'a'){
			     input[i]+='a'-'z'-1; 
		}
	    }
	}
	std::cout<<input;
}
int main(void)
{
	
	char Sa[255];
	char key[255];
	std::cin>>Sa;
	
	std::cin >> key;
	
	Cesar(Sa, key);
	
	std::cin >> key;
	
}           
