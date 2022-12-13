#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', 37);
	if(res != 5)	{
		printf("Test 6 failed:\n");
		printf("	Test 6 output: %hi\n",res);
		printf("	Test 6 expected: 5\n");
	}
	else printf("Test 6 passed\n");
	return 0;
}