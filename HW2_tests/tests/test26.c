#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -21);
	if(res != 6)	{
		printf("Test 26 failed:\n");
		printf("	Test 26 output: %hi\n",res);
		printf("	Test 26 expected: 6\n");
	}
	else printf("Test 26 passed\n");
	return 0;
}