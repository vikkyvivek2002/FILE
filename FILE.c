#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f;
	char s;
	f= fopen("vikky.txt","r");
	while((s=fgetc(f))!=EOF)
	{
		printf("%c",s);
	}
	fclose(f);
	return 0;
}