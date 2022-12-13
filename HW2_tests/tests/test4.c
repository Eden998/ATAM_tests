#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -45);
	if(res != 6)	{
		printf("Test 4 failed:\n");
		printf("	Test 4 output: %hi\n",res);
		printf("	Test 4 expected: 6\n");
	}
	else printf("Test 4 passed\n");
	return 0;
}