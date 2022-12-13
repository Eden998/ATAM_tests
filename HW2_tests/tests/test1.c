#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 15);
	if(res != 8)	{
		printf("Test 1 failed:\n");
		printf("	Test 1 output: %hi\n",res);
		printf("	Test 1 expected: 8\n");
	}
	else printf("Test 1 passed\n");
	return 0;
}