#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int c;
	char filename[1400];
	char tempstr[1024];
	FILE *fp;
	printf("请输入你要转化的md文件名：");
	gets(filename);
	if((fp=fopen(filename,"r+"))==NULL)
	{
		printf("打开文件%s出现错误",filename);
		return 0;
	}
	while((c == fgetc(fp)) != EOF)
	{
		if(c==35)
		{
			for(i=1;)
		}
	}
	char str[100],str1[100];
	char ch='#';
	char temp;
	scanf("%s",str);
	int i,j,a;
  	for(i=0;str[i]!='\0';i++)
  	{
  		if(str[i]==ch&&(str[i+1]!=ch))
     	break;
	}
	return i;
	for(j=i;str[j]!='\0';j++)
	{
		for(a=0;str[j]!='\0';a++)
		{
			str1[a]=str[j];
			str1[a+1]='\0';
		}
	}
	print("%s",str1);
	printf("<h%d> %s\n",i,str1);
	while(fgets(tempstr,1024,fp)!=NULL)
	 printf("%s",tempstr);
	fclose(fp);
}
