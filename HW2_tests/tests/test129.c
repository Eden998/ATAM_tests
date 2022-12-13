#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 8113737020753705560);
	if(res != 1)	{
		printf("Test 129 failed:\n");
		printf("	Test 129 output: %hi\n",res);
		printf("	Test 129 expected: 1\n");
	}
	else printf("Test 129 passed\n");
	return 0;
}