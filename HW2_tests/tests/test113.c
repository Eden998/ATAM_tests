#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 3831517540581882928);
	if(res != 3)	{
		printf("Test 113 failed:\n");
		printf("	Test 113 output: %hi\n",res);
		printf("	Test 113 expected: 3\n");
	}
	else printf("Test 113 passed\n");
	return 0;
}