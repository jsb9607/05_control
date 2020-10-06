#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int number; //추측 숫자
	int count = 0;
	

	do
	{
		printf("Guess a number : ");
		scanf("%d", &number);	
		
		if(number > answer)
		{
			printf("high!\n");
		}
		else if(number < answer)
		{
			printf("low!\n");
		}
		
		count ++;	
	}
	while (number != answer);

	printf("Congratulation! trials : %d\n", count);	

	return 0;
}
