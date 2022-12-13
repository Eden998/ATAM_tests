#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -11);
	if(res != 275)	{
		printf("Test 235 failed:\n");
		printf("	Test 235 output: %hi\n",res);
		printf("	Test 235 expected: 275\n");
	}
	else printf("Test 235 passed\n");
	return 0;
}