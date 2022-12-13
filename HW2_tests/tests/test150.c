#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 2020003522647387506);
	if(res != 5)	{
		printf("Test 150 failed:\n");
		printf("	Test 150 output: %hi\n",res);
		printf("	Test 150 expected: 5\n");
	}
	else printf("Test 150 passed\n");
	return 0;
}