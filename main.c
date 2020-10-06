#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int input;

	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &input);

	if(input < 0)
	{
		input = -input;		
		printf("절대값은 %d입니다.\n",input);	
	}
	else
	{
		printf("절대값은 %d입니다.\n",input);	
	}
	
	return 0;
}
