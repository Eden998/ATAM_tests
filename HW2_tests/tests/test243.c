#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -81);
	if(res != 494)	{
		printf("Test 243 failed:\n");
		printf("	Test 243 output: %hi\n",res);
		printf("	Test 243 expected: 494\n");
	}
	else printf("Test 243 passed\n");
	return 0;
}