#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 49);
	if(res != 94)	{
		printf("Test 281 failed:\n");
		printf("	Test 281 output: %hi\n",res);
		printf("	Test 281 expected: 94\n");
	}
	else printf("Test 281 passed\n");
	return 0;
}