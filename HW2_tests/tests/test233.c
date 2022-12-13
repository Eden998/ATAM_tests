#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -96);
	if(res != 307)	{
		printf("Test 233 failed:\n");
		printf("	Test 233 output: %hi\n",res);
		printf("	Test 233 expected: 307\n");
	}
	else printf("Test 233 passed\n");
	return 0;
}