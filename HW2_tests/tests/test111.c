#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -6498962385446149907);
	if(res != 3)	{
		printf("Test 111 failed:\n");
		printf("	Test 111 output: %hi\n",res);
		printf("	Test 111 expected: 3\n");
	}
	else printf("Test 111 passed\n");
	return 0;
}