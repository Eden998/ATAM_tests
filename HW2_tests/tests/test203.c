#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -16);
	if(res != 245)	{
		printf("Test 203 failed:\n");
		printf("	Test 203 output: %hi\n",res);
		printf("	Test 203 expected: 245\n");
	}
	else printf("Test 203 passed\n");
	return 0;
}