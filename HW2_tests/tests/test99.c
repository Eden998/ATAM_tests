#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -47);
	if(res != 8)	{
		printf("Test 99 failed:\n");
		printf("	Test 99 output: %hi\n",res);
		printf("	Test 99 expected: 8\n");
	}
	else printf("Test 99 passed\n");
	return 0;
}