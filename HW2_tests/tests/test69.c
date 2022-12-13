#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', -81);
	if(res != 18)	{
		printf("Test 69 failed:\n");
		printf("	Test 69 output: %hi\n",res);
		printf("	Test 69 expected: 18\n");
	}
	else printf("Test 69 passed\n");
	return 0;
}