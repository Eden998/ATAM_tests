#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 82);
	if(res != 72)	{
		printf("Test 259 failed:\n");
		printf("	Test 259 output: %hi\n",res);
		printf("	Test 259 expected: 72\n");
	}
	else printf("Test 259 passed\n");
	return 0;
}