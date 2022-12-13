#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 49);
	if(res != 5)	{
		printf("Test 2 failed:\n");
		printf("	Test 2 output: %hi\n",res);
		printf("	Test 2 expected: 5\n");
	}
	else printf("Test 2 passed\n");
	return 0;
}