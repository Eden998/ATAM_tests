#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -8932259476179507617);
	if(res != 9)	{
		printf("Test 131 failed:\n");
		printf("	Test 131 output: %hi\n",res);
		printf("	Test 131 expected: 9\n");
	}
	else printf("Test 131 passed\n");
	return 0;
}