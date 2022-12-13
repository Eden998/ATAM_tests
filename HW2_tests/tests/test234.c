#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', 43);
	if(res != 135)	{
		printf("Test 234 failed:\n");
		printf("	Test 234 output: %hi\n",res);
		printf("	Test 234 expected: 135\n");
	}
	else printf("Test 234 passed\n");
	return 0;
}