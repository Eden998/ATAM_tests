#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -17);
	if(res != 6)	{
		printf("Test 92 failed:\n");
		printf("	Test 92 output: %hi\n",res);
		printf("	Test 92 expected: 6\n");
	}
	else printf("Test 92 passed\n");
	return 0;
}