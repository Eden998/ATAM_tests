#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 6505709119522047550);
	if(res != 0)	{
		printf("Test 196 failed:\n");
		printf("	Test 196 output: %hi\n",res);
		printf("	Test 196 expected: 0\n");
	}
	else printf("Test 196 passed\n");
	return 0;
}