#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 37);
	if(res != 81)	{
		printf("Test 248 failed:\n");
		printf("	Test 248 output: %hi\n",res);
		printf("	Test 248 expected: 81\n");
	}
	else printf("Test 248 passed\n");
	return 0;
}