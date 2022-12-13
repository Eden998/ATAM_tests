#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', 1472954584697355554);
	if(res != 7)	{
		printf("Test 155 failed:\n");
		printf("	Test 155 output: %hi\n",res);
		printf("	Test 155 expected: 7\n");
	}
	else printf("Test 155 passed\n");
	return 0;
}