#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 75);
	if(res != 64)	{
		printf("Test 228 failed:\n");
		printf("	Test 228 output: %hi\n",res);
		printf("	Test 228 expected: 64\n");
	}
	else printf("Test 228 passed\n");
	return 0;
}