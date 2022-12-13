#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 1299915631398403434);
	if(res != 6)	{
		printf("Test 171 failed:\n");
		printf("	Test 171 output: %hi\n",res);
		printf("	Test 171 expected: 6\n");
	}
	else printf("Test 171 passed\n");
	return 0;
}