#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 52);
	if(res != 227)	{
		printf("Test 264 failed:\n");
		printf("	Test 264 output: %hi\n",res);
		printf("	Test 264 expected: 227\n");
	}
	else printf("Test 264 passed\n");
	return 0;
}