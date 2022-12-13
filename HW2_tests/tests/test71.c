#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 36);
	if(res != 3)	{
		printf("Test 71 failed:\n");
		printf("	Test 71 output: %hi\n",res);
		printf("	Test 71 expected: 3\n");
	}
	else printf("Test 71 passed\n");
	return 0;
}