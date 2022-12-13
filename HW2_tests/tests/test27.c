#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -18);
	if(res != 5)	{
		printf("Test 27 failed:\n");
		printf("	Test 27 output: %hi\n",res);
		printf("	Test 27 expected: 5\n");
	}
	else printf("Test 27 passed\n");
	return 0;
}