#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -31);
	if(res != 9)	{
		printf("Test 3 failed:\n");
		printf("	Test 3 output: %hi\n",res);
		printf("	Test 3 expected: 9\n");
	}
	else printf("Test 3 passed\n");
	return 0;
}