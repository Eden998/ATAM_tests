#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', -62);
	if(res != 334)	{
		printf("Test 226 failed:\n");
		printf("	Test 226 output: %hi\n",res);
		printf("	Test 226 expected: 334\n");
	}
	else printf("Test 226 passed\n");
	return 0;
}