#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -4123325781152815031);
	if(res != 15)	{
		printf("Test 117 failed:\n");
		printf("	Test 117 output: %hi\n",res);
		printf("	Test 117 expected: 15\n");
	}
	else printf("Test 117 passed\n");
	return 0;
}