#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', 38);
	if(res != 46)	{
		printf("Test 230 failed:\n");
		printf("	Test 230 output: %hi\n",res);
		printf("	Test 230 expected: 46\n");
	}
	else printf("Test 230 passed\n");
	return 0;
}