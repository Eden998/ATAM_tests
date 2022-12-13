#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -31);
	if(res != 270)	{
		printf("Test 255 failed:\n");
		printf("	Test 255 output: %hi\n",res);
		printf("	Test 255 expected: 270\n");
	}
	else printf("Test 255 passed\n");
	return 0;
}