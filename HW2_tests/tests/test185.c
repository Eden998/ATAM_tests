#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -1143051313972412259);
	if(res != 2)	{
		printf("Test 185 failed:\n");
		printf("	Test 185 output: %hi\n",res);
		printf("	Test 185 expected: 2\n");
	}
	else printf("Test 185 passed\n");
	return 0;
}