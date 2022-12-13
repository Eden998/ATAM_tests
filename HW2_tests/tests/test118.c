#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', 2122713469784666630);
	if(res != 5)	{
		printf("Test 118 failed:\n");
		printf("	Test 118 output: %hi\n",res);
		printf("	Test 118 expected: 5\n");
	}
	else printf("Test 118 passed\n");
	return 0;
}