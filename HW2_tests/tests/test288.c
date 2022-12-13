#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -20);
	if(res != 281)	{
		printf("Test 288 failed:\n");
		printf("	Test 288 output: %hi\n",res);
		printf("	Test 288 expected: 281\n");
	}
	else printf("Test 288 passed\n");
	return 0;
}