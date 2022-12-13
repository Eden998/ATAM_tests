#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -11);
	if(res != 347)	{
		printf("Test 205 failed:\n");
		printf("	Test 205 output: %hi\n",res);
		printf("	Test 205 expected: 347\n");
	}
	else printf("Test 205 passed\n");
	return 0;
}