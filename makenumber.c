#include<stdio.h>
int main ( )
{
char op,q;
int i,j;
int num [2][50];
	switch(q){
	case'q':
		printf("첫번째 숫자의 값은
		break;
	}
	for(i=1;i<3;i++)
	{
		printf("%d 번쨰 숫자를 입력하세요 \n",i);
		for(j=1;j<51;j++)
		{
			scanf("%d", &num[i][j]);
			
		}
		printf("%d", num[i][j]);
	}
}


