#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', 81);
	if(res != 69)	{
		printf("Test 240 failed:\n");
		printf("	Test 240 output: %hi\n",res);
		printf("	Test 240 expected: 69\n");
	}
	else printf("Test 240 passed\n");
	return 0;
}