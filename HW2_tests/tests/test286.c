#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 27);
	if(res != 198)	{
		printf("Test 286 failed:\n");
		printf("	Test 286 output: %hi\n",res);
		printf("	Test 286 expected: 198\n");
	}
	else printf("Test 286 passed\n");
	return 0;
}