#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -93);
	if(res != 609)	{
		printf("Test 270 failed:\n");
		printf("	Test 270 output: %hi\n",res);
		printf("	Test 270 expected: 609\n");
	}
	else printf("Test 270 passed\n");
	return 0;
}