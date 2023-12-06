#include<stdio.h>
int main()
{
	FILE *file;
	char str[100];
	file = fopen("/Users/macbook/Desktop/demoreadfile","r");
	
	fread(str,sizeof(char),sizeof(str),file);
	printf("Chuoi trong tep ghi : %s",str);
	
	
	fclose(file);
}