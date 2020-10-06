#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int count;

	printf("input a string : ")	;

	while((c = getchar()) != '\n')
	{
		if(47 < c && c < 58)	
		{		
			count++;
		}
	}

	printf("the number of digits is %d\n ", count);
	
	return 0;
}
