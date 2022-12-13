#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 70);
	if(res != 2)	{
		printf("Test 83 failed:\n");
		printf("	Test 83 output: %hi\n",res);
		printf("	Test 83 expected: 2\n");
	}
	else printf("Test 83 passed\n");
	return 0;
}