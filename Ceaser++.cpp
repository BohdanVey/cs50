#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <iostream>
void Cesar(char input[],int key)
{
	for (int i = 0; i< strlen(input); i++)
	{
		input[i] += (key) % 26;
		if (input[i]<'Z' ){
		   input[i]+='a'-'z'-1; 
		}
	}
	std::cout<<input;
}
int main(void)
{
	
	char Sa[255];
	int key;
	std::cin>>Sa;
	
	std::cin >> key;
	
	Cesar(Sa, key);
	
	std::cin >> key;
	
}
