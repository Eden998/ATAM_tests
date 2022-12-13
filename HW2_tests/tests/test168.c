#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 6601058722279143323);
	if(res != 0)	{
		printf("Test 168 failed:\n");
		printf("	Test 168 output: %hi\n",res);
		printf("	Test 168 expected: 0\n");
	}
	else printf("Test 168 passed\n");
	return 0;
}