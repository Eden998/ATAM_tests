#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -91);
	if(res != 777)	{
		printf("Test 258 failed:\n");
		printf("	Test 258 output: %hi\n",res);
		printf("	Test 258 expected: 777\n");
	}
	else printf("Test 258 passed\n");
	return 0;
}