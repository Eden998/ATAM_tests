#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -31);
	if(res != 0)	{
		printf("Test 22 failed:\n");
		printf("	Test 22 output: %hi\n",res);
		printf("	Test 22 expected: 0\n");
	}
	else printf("Test 22 passed\n");
	return 0;
}