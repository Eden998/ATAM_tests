#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', 89);
	if(res != 31)	{
		printf("Test 280 failed:\n");
		printf("	Test 280 output: %hi\n",res);
		printf("	Test 280 expected: 31\n");
	}
	else printf("Test 280 passed\n");
	return 0;
}