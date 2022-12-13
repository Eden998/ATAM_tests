#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -8049974264528703347);
	if(res != 8)	{
		printf("Test 173 failed:\n");
		printf("	Test 173 output: %hi\n",res);
		printf("	Test 173 expected: 8\n");
	}
	else printf("Test 173 passed\n");
	return 0;
}