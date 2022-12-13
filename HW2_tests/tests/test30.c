#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', -13);
	if(res != 4)	{
		printf("Test 30 failed:\n");
		printf("	Test 30 output: %hi\n",res);
		printf("	Test 30 expected: 4\n");
	}
	else printf("Test 30 passed\n");
	return 0;
}