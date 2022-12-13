#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 12);
	if(res != 78)	{
		printf("Test 299 failed:\n");
		printf("	Test 299 output: %hi\n",res);
		printf("	Test 299 expected: 78\n");
	}
	else printf("Test 299 passed\n");
	return 0;
}