#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', 65);
	if(res != 113)	{
		printf("Test 285 failed:\n");
		printf("	Test 285 output: %hi\n",res);
		printf("	Test 285 expected: 113\n");
	}
	else printf("Test 285 passed\n");
	return 0;
}