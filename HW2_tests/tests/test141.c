#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -6042283195458815693);
	if(res != 10)	{
		printf("Test 141 failed:\n");
		printf("	Test 141 output: %hi\n",res);
		printf("	Test 141 expected: 10\n");
	}
	else printf("Test 141 passed\n");
	return 0;
}