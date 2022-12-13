#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -87);
	if(res != 10)	{
		printf("Test 70 failed:\n");
		printf("	Test 70 output: %hi\n",res);
		printf("	Test 70 expected: 10\n");
	}
	else printf("Test 70 passed\n");
	return 0;
}