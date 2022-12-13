#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', -39);
	if(res != 421)	{
		printf("Test 250 failed:\n");
		printf("	Test 250 output: %hi\n",res);
		printf("	Test 250 expected: 421\n");
	}
	else printf("Test 250 passed\n");
	return 0;
}