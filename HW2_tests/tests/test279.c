#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -1);
	if(res != 361)	{
		printf("Test 279 failed:\n");
		printf("	Test 279 output: %hi\n",res);
		printf("	Test 279 expected: 361\n");
	}
	else printf("Test 279 passed\n");
	return 0;
}