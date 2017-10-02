#include<stdio.h>
#include<stdlib.h>

#define MAX 1024

int output(char *file_name)
{
	FILE *fp;
	char buf[MAX];
	static int count=0;
	fp=fopen(file_name,"r");
	if(fp==NULL){
		perror("fail to open");
		return -1;
	}

	while(fgets(fp,buf,MAX)!=NULL){
			int n=strlen(buf);
			buf[n-1]='\0';
			printf("\%s\n",buf);
			if(count++ %5==0)
			printf ("\n");
			}

		fclose(fp);
		return 0;
		}

int main(voif)
{
char file_name[][10]={"test.txt","test1.text","test2.text"};
int i;
i=0;
while(1<3)
{
if(output(file_name[i])==-1)
exit(1);
i++;
}
return 0;
}

