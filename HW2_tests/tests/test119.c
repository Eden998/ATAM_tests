#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -4446751282212246849);
	if(res != 4)	{
		printf("Test 119 failed:\n");
		printf("	Test 119 output: %hi\n",res);
		printf("	Test 119 expected: 4\n");
	}
	else printf("Test 119 passed\n");
	return 0;
}