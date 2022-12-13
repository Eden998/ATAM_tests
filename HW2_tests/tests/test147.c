#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', 9031333549397103947);
	if(res != 0)	{
		printf("Test 147 failed:\n");
		printf("	Test 147 output: %hi\n",res);
		printf("	Test 147 expected: 0\n");
	}
	else printf("Test 147 passed\n");
	return 0;
}