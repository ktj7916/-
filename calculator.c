#include<stdio.h>
float operand(char op, float x, float y);// 함수 호출하기
int main ( )
{
	char op;
	float x,y;
	printf("연산자를 입력하세요 \n");
	scanf("%c", &op);
	printf("두 숫자를 입력하세요 \n");
	scanf("%f %f", &x, &y);
	operand(op,x,y);
}
	float operand(char op, float x, float y) //연산자 함수
{
	switch(op){
		case'+':
			printf("%f \n", x+y);
			break;
		
		case'-':
			printf("%f \n", x-y);
			break;

		case'*':
			printf("%f \n", x*y);
			break;

		case'/':
			printf("%f \n", x/y);
			break;

		default:
			printf("연산자를 올바르게 입력하십시오\n");
			break;
	}
}
