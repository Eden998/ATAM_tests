#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', -56);
	if(res != 517)	{
		printf("Test 207 failed:\n");
		printf("	Test 207 output: %hi\n",res);
		printf("	Test 207 expected: 517\n");
	}
	else printf("Test 207 passed\n");
	return 0;
}