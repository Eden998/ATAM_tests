#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -66);
	if(res != 397)	{
		printf("Test 254 failed:\n");
		printf("	Test 254 output: %hi\n",res);
		printf("	Test 254 expected: 397\n");
	}
	else printf("Test 254 passed\n");
	return 0;
}