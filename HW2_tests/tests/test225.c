#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -89);
	if(res != 793)	{
		printf("Test 225 failed:\n");
		printf("	Test 225 output: %hi\n",res);
		printf("	Test 225 expected: 793\n");
	}
	else printf("Test 225 passed\n");
	return 0;
}