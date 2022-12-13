#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 88);
	if(res != 2)	{
		printf("Test 85 failed:\n");
		printf("	Test 85 output: %hi\n",res);
		printf("	Test 85 expected: 2\n");
	}
	else printf("Test 85 passed\n");
	return 0;
}