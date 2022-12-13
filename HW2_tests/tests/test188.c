#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 4397324246189054803);
	if(res != 5)	{
		printf("Test 188 failed:\n");
		printf("	Test 188 output: %hi\n",res);
		printf("	Test 188 expected: 5\n");
	}
	else printf("Test 188 passed\n");
	return 0;
}