#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 3489216698389077737);
	if(res != 5)	{
		printf("Test 146 failed:\n");
		printf("	Test 146 output: %hi\n",res);
		printf("	Test 146 expected: 5\n");
	}
	else printf("Test 146 passed\n");
	return 0;
}