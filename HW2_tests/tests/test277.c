#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -91);
	if(res != 491)	{
		printf("Test 277 failed:\n");
		printf("	Test 277 output: %hi\n",res);
		printf("	Test 277 expected: 491\n");
	}
	else printf("Test 277 passed\n");
	return 0;
}