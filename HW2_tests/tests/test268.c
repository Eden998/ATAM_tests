#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -33);
	if(res != 269)	{
		printf("Test 268 failed:\n");
		printf("	Test 268 output: %hi\n",res);
		printf("	Test 268 expected: 269\n");
	}
	else printf("Test 268 passed\n");
	return 0;
}