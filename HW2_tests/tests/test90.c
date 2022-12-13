#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', 76);
	if(res != 1)	{
		printf("Test 90 failed:\n");
		printf("	Test 90 output: %hi\n",res);
		printf("	Test 90 expected: 1\n");
	}
	else printf("Test 90 passed\n");
	return 0;
}