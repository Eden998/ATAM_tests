#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', -92);
	if(res != 12)	{
		printf("Test 12 failed:\n");
		printf("	Test 12 output: %hi\n",res);
		printf("	Test 12 expected: 12\n");
	}
	else printf("Test 12 passed\n");
	return 0;
}