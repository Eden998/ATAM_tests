#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', -8147942187467116998);
	if(res != 15)	{
		printf("Test 179 failed:\n");
		printf("	Test 179 output: %hi\n",res);
		printf("	Test 179 expected: 15\n");
	}
	else printf("Test 179 passed\n");
	return 0;
}