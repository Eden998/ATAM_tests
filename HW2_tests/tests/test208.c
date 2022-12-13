#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', 4);
	if(res != 342)	{
		printf("Test 208 failed:\n");
		printf("	Test 208 output: %hi\n",res);
		printf("	Test 208 expected: 342\n");
	}
	else printf("Test 208 passed\n");
	return 0;
}