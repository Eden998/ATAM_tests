#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', 87);
	if(res != 1)	{
		printf("Test 59 failed:\n");
		printf("	Test 59 output: %hi\n",res);
		printf("	Test 59 expected: 1\n");
	}
	else printf("Test 59 passed\n");
	return 0;
}