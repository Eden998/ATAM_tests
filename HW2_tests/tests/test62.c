#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 62);
	if(res != 1)	{
		printf("Test 62 failed:\n");
		printf("	Test 62 output: %hi\n",res);
		printf("	Test 62 expected: 1\n");
	}
	else printf("Test 62 passed\n");
	return 0;
}