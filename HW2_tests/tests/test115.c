#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 4882615962484315598);
	if(res != 1)	{
		printf("Test 115 failed:\n");
		printf("	Test 115 output: %hi\n",res);
		printf("	Test 115 expected: 1\n");
	}
	else printf("Test 115 passed\n");
	return 0;
}