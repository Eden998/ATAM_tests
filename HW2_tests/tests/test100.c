#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -100);
	if(res != 20)	{
		printf("Test 100 failed:\n");
		printf("	Test 100 output: %hi\n",res);
		printf("	Test 100 expected: 20\n");
	}
	else printf("Test 100 passed\n");
	return 0;
}