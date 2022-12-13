#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', 36);
	if(res != 4)	{
		printf("Test 54 failed:\n");
		printf("	Test 54 output: %hi\n",res);
		printf("	Test 54 expected: 4\n");
	}
	else printf("Test 54 passed\n");
	return 0;
}