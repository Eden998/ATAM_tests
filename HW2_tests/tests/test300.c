#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -71);
	if(res != 443)	{
		printf("Test 300 failed:\n");
		printf("	Test 300 output: %hi\n",res);
		printf("	Test 300 expected: 443\n");
	}
	else printf("Test 300 passed\n");
	return 0;
}