#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(void){
	FILE*fp = NULL;
	char c;
	char str[30];
	
	fp = fopen("sample. txt", "r");
	
	if(fp == NULL)
	
		printf("can't open file\n");
		
	while((c = fgetc(fp)) != EOF)
		putchar(c);

	fclose(fp);
}
