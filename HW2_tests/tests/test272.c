#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -31);
	if(res != 491)	{
		printf("Test 272 failed:\n");
		printf("	Test 272 output: %hi\n",res);
		printf("	Test 272 expected: 491\n");
	}
	else printf("Test 272 passed\n");
	return 0;
}