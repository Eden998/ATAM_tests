#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -4656397800269435045);
	if(res != 2)	{
		printf("Test 163 failed:\n");
		printf("	Test 163 output: %hi\n",res);
		printf("	Test 163 expected: 2\n");
	}
	else printf("Test 163 passed\n");
	return 0;
}