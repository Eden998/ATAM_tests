#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', 68);
	if(res != 6)	{
		printf("Test 89 failed:\n");
		printf("	Test 89 output: %hi\n",res);
		printf("	Test 89 expected: 6\n");
	}
	else printf("Test 89 passed\n");
	return 0;
}