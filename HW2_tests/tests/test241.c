#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 86);
	if(res != 28)	{
		printf("Test 241 failed:\n");
		printf("	Test 241 output: %hi\n",res);
		printf("	Test 241 expected: 28\n");
	}
	else printf("Test 241 passed\n");
	return 0;
}