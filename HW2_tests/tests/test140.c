#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', -7154277815987946552);
	if(res != 10)	{
		printf("Test 140 failed:\n");
		printf("	Test 140 output: %hi\n",res);
		printf("	Test 140 expected: 10\n");
	}
	else printf("Test 140 passed\n");
	return 0;
}