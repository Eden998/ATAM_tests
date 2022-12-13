#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -91);
	if(res != 13)	{
		printf("Test 21 failed:\n");
		printf("	Test 21 output: %hi\n",res);
		printf("	Test 21 expected: 13\n");
	}
	else printf("Test 21 passed\n");
	return 0;
}