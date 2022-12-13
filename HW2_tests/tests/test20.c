#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -31);
	if(res != 10)	{
		printf("Test 20 failed:\n");
		printf("	Test 20 output: %hi\n",res);
		printf("	Test 20 expected: 10\n");
	}
	else printf("Test 20 passed\n");
	return 0;
}