#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -4);
	if(res != 300)	{
		printf("Test 295 failed:\n");
		printf("	Test 295 output: %hi\n",res);
		printf("	Test 295 expected: 300\n");
	}
	else printf("Test 295 passed\n");
	return 0;
}