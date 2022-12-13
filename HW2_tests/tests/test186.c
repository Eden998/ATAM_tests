#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 2940591726582400066);
	if(res != 7)	{
		printf("Test 186 failed:\n");
		printf("	Test 186 output: %hi\n",res);
		printf("	Test 186 expected: 7\n");
	}
	else printf("Test 186 passed\n");
	return 0;
}