#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 58);
	if(res != 211)	{
		printf("Test 211 failed:\n");
		printf("	Test 211 output: %hi\n",res);
		printf("	Test 211 expected: 211\n");
	}
	else printf("Test 211 passed\n");
	return 0;
}