#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', 95);
	if(res != 0)	{
		printf("Test 58 failed:\n");
		printf("	Test 58 output: %hi\n",res);
		printf("	Test 58 expected: 0\n");
	}
	else printf("Test 58 passed\n");
	return 0;
}