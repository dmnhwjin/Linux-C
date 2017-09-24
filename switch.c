#include<stdio.h>
int main(void)
{
	char score;
	scanf("%c",&score);

	switch(score)
	{
		case 'A':
			printf("excellent\n");
			break;
		case 'B':
			printf("Good\n");
			break;
		case 'C':
			printf("Pass\n");
			break;
		default:
			printf("Fail\n");
	}
	return 0;
}

