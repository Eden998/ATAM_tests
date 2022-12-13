#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -19);
	if(res != 453)	{
		printf("Test 257 failed:\n");
		printf("	Test 257 output: %hi\n",res);
		printf("	Test 257 expected: 453\n");
	}
	else printf("Test 257 passed\n");
	return 0;
}