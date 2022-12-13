#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -56);
	if(res != 469)	{
		printf("Test 229 failed:\n");
		printf("	Test 229 output: %hi\n",res);
		printf("	Test 229 expected: 469\n");
	}
	else printf("Test 229 passed\n");
	return 0;
}