#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -870246799131132926);
	if(res != 2)	{
		printf("Test 105 failed:\n");
		printf("	Test 105 output: %hi\n",res);
		printf("	Test 105 expected: 2\n");
	}
	else printf("Test 105 passed\n");
	return 0;
}