#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -50);
	if(res != 644)	{
		printf("Test 297 failed:\n");
		printf("	Test 297 output: %hi\n",res);
		printf("	Test 297 expected: 644\n");
	}
	else printf("Test 297 passed\n");
	return 0;
}