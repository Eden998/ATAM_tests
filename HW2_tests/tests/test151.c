#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -5884326893655859279);
	if(res != 8)	{
		printf("Test 151 failed:\n");
		printf("	Test 151 output: %hi\n",res);
		printf("	Test 151 expected: 8\n");
	}
	else printf("Test 151 passed\n");
	return 0;
}