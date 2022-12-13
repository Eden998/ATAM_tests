#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -53);
	if(res != 11)	{
		printf("Test 43 failed:\n");
		printf("	Test 43 output: %hi\n",res);
		printf("	Test 43 expected: 11\n");
	}
	else printf("Test 43 passed\n");
	return 0;
}