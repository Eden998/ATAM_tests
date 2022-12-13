#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -30);
	if(res != 398)	{
		printf("Test 262 failed:\n");
		printf("	Test 262 output: %hi\n",res);
		printf("	Test 262 expected: 398\n");
	}
	else printf("Test 262 passed\n");
	return 0;
}