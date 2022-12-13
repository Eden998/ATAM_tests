#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -92);
	if(res != 7)	{
		printf("Test 66 failed:\n");
		printf("	Test 66 output: %hi\n",res);
		printf("	Test 66 expected: 7\n");
	}
	else printf("Test 66 passed\n");
	return 0;
}