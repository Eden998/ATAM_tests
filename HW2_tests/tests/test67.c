#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -40);
	if(res != 2)	{
		printf("Test 67 failed:\n");
		printf("	Test 67 output: %hi\n",res);
		printf("	Test 67 expected: 2\n");
	}
	else printf("Test 67 passed\n");
	return 0;
}