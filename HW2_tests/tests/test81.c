#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -87);
	if(res != 16)	{
		printf("Test 81 failed:\n");
		printf("	Test 81 output: %hi\n",res);
		printf("	Test 81 expected: 16\n");
	}
	else printf("Test 81 passed\n");
	return 0;
}