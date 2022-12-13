#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -100);
	if(res != 655)	{
		printf("Test 222 failed:\n");
		printf("	Test 222 output: %hi\n",res);
		printf("	Test 222 expected: 655\n");
	}
	else printf("Test 222 passed\n");
	return 0;
}