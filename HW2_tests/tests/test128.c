#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 6075244668598434405);
	if(res != 2)	{
		printf("Test 128 failed:\n");
		printf("	Test 128 output: %hi\n",res);
		printf("	Test 128 expected: 2\n");
	}
	else printf("Test 128 passed\n");
	return 0;
}