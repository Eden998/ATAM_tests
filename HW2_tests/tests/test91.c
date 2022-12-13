#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 40);
	if(res != 0)	{
		printf("Test 91 failed:\n");
		printf("	Test 91 output: %hi\n",res);
		printf("	Test 91 expected: 0\n");
	}
	else printf("Test 91 passed\n");
	return 0;
}