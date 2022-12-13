#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -46);
	if(res != 10)	{
		printf("Test 50 failed:\n");
		printf("	Test 50 output: %hi\n",res);
		printf("	Test 50 expected: 10\n");
	}
	else printf("Test 50 passed\n");
	return 0;
}