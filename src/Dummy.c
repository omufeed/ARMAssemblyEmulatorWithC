#include <stdio.h>

int main_dummy(void)
{
	int ch;
	do {
	printf("still yes...\n");
	printf("\nenter choice :: ");
	ch = getchar();
	getchar();
	}while(ch == 'y');
	return 0;
}
