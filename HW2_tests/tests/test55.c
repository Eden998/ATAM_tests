#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', -68);
	if(res != 7)	{
		printf("Test 55 failed:\n");
		printf("	Test 55 output: %hi\n",res);
		printf("	Test 55 expected: 7\n");
	}
	else printf("Test 55 passed\n");
	return 0;
}