#include<stdio.h>

int main()
{
	char main_str[100];
	char str1[30] = "Hello";
	char str2[30] = "World";
	int year = 2024;
	
	//sprintf(dest, "%s", src); //copy
	int len = sprintf(main_str, "%s %s in %d\n", str1, str2, year); // concatinate
	
	printf("Lenght of main_str = %d\n", len); // it will consider \n as another character thus length will be 20
	puts(main_str);
	
	return 0;
}
