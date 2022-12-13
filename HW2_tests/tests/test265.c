#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 26);
	if(res != 285)	{
		printf("Test 265 failed:\n");
		printf("	Test 265 output: %hi\n",res);
		printf("	Test 265 expected: 285\n");
	}
	else printf("Test 265 passed\n");
	return 0;
}