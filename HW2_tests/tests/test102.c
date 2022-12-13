#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -8903588153988404273);
	if(res != 5)	{
		printf("Test 102 failed:\n");
		printf("	Test 102 output: %hi\n",res);
		printf("	Test 102 expected: 5\n");
	}
	else printf("Test 102 passed\n");
	return 0;
}