#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 4796358887525095140);
	if(res != 3)	{
		printf("Test 180 failed:\n");
		printf("	Test 180 output: %hi\n",res);
		printf("	Test 180 expected: 3\n");
	}
	else printf("Test 180 passed\n");
	return 0;
}