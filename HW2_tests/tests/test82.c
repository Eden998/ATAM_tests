#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -77);
	if(res != 6)	{
		printf("Test 82 failed:\n");
		printf("	Test 82 output: %hi\n",res);
		printf("	Test 82 expected: 6\n");
	}
	else printf("Test 82 passed\n");
	return 0;
}