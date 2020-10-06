#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;	//입력값
	char cal;	//산술 연산자

	printf("enter the calculation : ");
	scanf("%d%c%d", &x, &cal, &y);

	switch(cal){
		case '+':
			printf("= %d\n", x+y);
			break;
		
		case '-':
			printf("= %d\n", x-y);
			break;
		
		case '*':
			printf("= %d\n", x*y);
			break;
		
		case '/':
			printf("= %d\n", x/y);
			break;
		default:
			printf("error\n");
			break;
	}
	
	return 0;
}
