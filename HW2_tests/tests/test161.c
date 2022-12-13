#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -2444743959673268117);
	if(res != 12)	{
		printf("Test 161 failed:\n");
		printf("	Test 161 output: %hi\n",res);
		printf("	Test 161 expected: 12\n");
	}
	else printf("Test 161 passed\n");
	return 0;
}