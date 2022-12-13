#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -1279417450658085092);
	if(res != 9)	{
		printf("Test 138 failed:\n");
		printf("	Test 138 output: %hi\n",res);
		printf("	Test 138 expected: 9\n");
	}
	else printf("Test 138 passed\n");
	return 0;
}