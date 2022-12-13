#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 38);
	if(res != 197)	{
		printf("Test 231 failed:\n");
		printf("	Test 231 output: %hi\n",res);
		printf("	Test 231 expected: 197\n");
	}
	else printf("Test 231 passed\n");
	return 0;
}