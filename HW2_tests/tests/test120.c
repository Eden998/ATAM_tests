#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', -8876197601395884243);
	if(res != 15)	{
		printf("Test 120 failed:\n");
		printf("	Test 120 output: %hi\n",res);
		printf("	Test 120 expected: 15\n");
	}
	else printf("Test 120 passed\n");
	return 0;
}