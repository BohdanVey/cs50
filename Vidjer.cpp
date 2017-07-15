#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <iostream>
void Cesar(char input[],char key[])
{
	for (int i = 0; i< strlen(input); i++)
	{
		input[i] += (key[i%strlen(key)] -18) % 26;
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
