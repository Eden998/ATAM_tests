#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 3796305755867782890);
	if(res != 7)	{
		printf("Test 169 failed:\n");
		printf("	Test 169 output: %hi\n",res);
		printf("	Test 169 expected: 7\n");
	}
	else printf("Test 169 passed\n");
	return 0;
}