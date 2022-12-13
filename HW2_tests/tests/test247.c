#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -89);
	if(res != 102)	{
		printf("Test 247 failed:\n");
		printf("	Test 247 output: %hi\n",res);
		printf("	Test 247 expected: 102\n");
	}
	else printf("Test 247 passed\n");
	return 0;
}