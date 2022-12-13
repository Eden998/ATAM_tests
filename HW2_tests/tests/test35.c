#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 26);
	if(res != 2)	{
		printf("Test 35 failed:\n");
		printf("	Test 35 output: %hi\n",res);
		printf("	Test 35 expected: 2\n");
	}
	else printf("Test 35 passed\n");
	return 0;
}