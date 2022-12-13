#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -2929031870200598303);
	if(res != 4)	{
		printf("Test 178 failed:\n");
		printf("	Test 178 output: %hi\n",res);
		printf("	Test 178 expected: 4\n");
	}
	else printf("Test 178 passed\n");
	return 0;
}