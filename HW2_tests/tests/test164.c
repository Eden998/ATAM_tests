#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -7757341093282722459);
	if(res != 9)	{
		printf("Test 164 failed:\n");
		printf("	Test 164 output: %hi\n",res);
		printf("	Test 164 expected: 9\n");
	}
	else printf("Test 164 passed\n");
	return 0;
}