#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -5978776224678012209);
	if(res != 12)	{
		printf("Test 156 failed:\n");
		printf("	Test 156 output: %hi\n",res);
		printf("	Test 156 expected: 12\n");
	}
	else printf("Test 156 passed\n");
	return 0;
}