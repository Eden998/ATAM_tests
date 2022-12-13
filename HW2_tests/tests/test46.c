#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -55);
	if(res != 4)	{
		printf("Test 46 failed:\n");
		printf("	Test 46 output: %hi\n",res);
		printf("	Test 46 expected: 4\n");
	}
	else printf("Test 46 passed\n");
	return 0;
}