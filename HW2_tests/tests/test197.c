#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -4488236401868483440);
	if(res != 1)	{
		printf("Test 197 failed:\n");
		printf("	Test 197 output: %hi\n",res);
		printf("	Test 197 expected: 1\n");
	}
	else printf("Test 197 passed\n");
	return 0;
}