#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 66);
	if(res != 0)	{
		printf("Test 98 failed:\n");
		printf("	Test 98 output: %hi\n",res);
		printf("	Test 98 expected: 0\n");
	}
	else printf("Test 98 passed\n");
	return 0;
}