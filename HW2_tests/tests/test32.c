#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -88);
	if(res != 3)	{
		printf("Test 32 failed:\n");
		printf("	Test 32 output: %hi\n",res);
		printf("	Test 32 expected: 3\n");
	}
	else printf("Test 32 passed\n");
	return 0;
}