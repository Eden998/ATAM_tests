#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 68);
	if(res != 3)	{
		printf("Test 79 failed:\n");
		printf("	Test 79 output: %hi\n",res);
		printf("	Test 79 expected: 3\n");
	}
	else printf("Test 79 passed\n");
	return 0;
}