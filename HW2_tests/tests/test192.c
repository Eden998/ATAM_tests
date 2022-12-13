#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 7906927603868117060);
	if(res != 1)	{
		printf("Test 192 failed:\n");
		printf("	Test 192 output: %hi\n",res);
		printf("	Test 192 expected: 1\n");
	}
	else printf("Test 192 passed\n");
	return 0;
}