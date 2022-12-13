#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 5);
	if(res != 333)	{
		printf("Test 223 failed:\n");
		printf("	Test 223 output: %hi\n",res);
		printf("	Test 223 expected: 333\n");
	}
	else printf("Test 223 passed\n");
	return 0;
}