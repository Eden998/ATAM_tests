#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 21);
	if(res != 276)	{
		printf("Test 244 failed:\n");
		printf("	Test 244 output: %hi\n",res);
		printf("	Test 244 expected: 276\n");
	}
	else printf("Test 244 passed\n");
	return 0;
}