/*#include<stdio.h>
int main()
{

	FILE *fp;
	fp=fopen("file1.txt","w+");
	
	fprintf(fp,"welcome to skillcode for decode your skill\n");
	fputs("you are entering to learn c-language now....\n",fp);
	fclose(fp);
}*/



#include<stdio.h>
int main()
{

	FILE *fp;
	char str[255];
	fp=fopen("file1.txt","r");
	
	while(fscanf(fp,"%s",str)!=EOF)
	{
		printf("%s",str);
	}
	//fprintf(fp,"welcome to skillcode for decode your skill\n");
	//fputs("you are entering to learn c-language now....\n",fp);
	fclose(fp);
}