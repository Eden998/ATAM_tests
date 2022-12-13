#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -6013879879348663836);
	if(res != 12)	{
		printf("Test 176 failed:\n");
		printf("	Test 176 output: %hi\n",res);
		printf("	Test 176 expected: 12\n");
	}
	else printf("Test 176 passed\n");
	return 0;
}