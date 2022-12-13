#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', -801476071825633288);
	if(res != 4)	{
		printf("Test 181 failed:\n");
		printf("	Test 181 output: %hi\n",res);
		printf("	Test 181 expected: 4\n");
	}
	else printf("Test 181 passed\n");
	return 0;
}