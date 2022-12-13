#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -28);
	if(res != 3)	{
		printf("Test 39 failed:\n");
		printf("	Test 39 output: %hi\n",res);
		printf("	Test 39 expected: 3\n");
	}
	else printf("Test 39 passed\n");
	return 0;
}