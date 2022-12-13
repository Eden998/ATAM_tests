#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -51);
	if(res != 717)	{
		printf("Test 263 failed:\n");
		printf("	Test 263 output: %hi\n",res);
		printf("	Test 263 expected: 717\n");
	}
	else printf("Test 263 passed\n");
	return 0;
}