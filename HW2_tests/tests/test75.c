#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', 93);
	if(res != 1)	{
		printf("Test 75 failed:\n");
		printf("	Test 75 output: %hi\n",res);
		printf("	Test 75 expected: 1\n");
	}
	else printf("Test 75 passed\n");
	return 0;
}