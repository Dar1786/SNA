#include<stdio.h>
#include<string.h>


int main()
{
	char *token;
	char str[1000];
	char buang[100]=" ";
	int i=0;
	token=strtok(str,buang);
	scanf("%[^\n]",&str);
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=(NULL,buang);
		break;
	}
	
	
	
}
