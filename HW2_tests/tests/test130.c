#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 8434205813273600249);
	if(res != 0)	{
		printf("Test 130 failed:\n");
		printf("	Test 130 output: %hi\n",res);
		printf("	Test 130 expected: 0\n");
	}
	else printf("Test 130 passed\n");
	return 0;
}