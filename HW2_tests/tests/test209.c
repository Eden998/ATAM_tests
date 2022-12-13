#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 87);
	if(res != 50)	{
		printf("Test 209 failed:\n");
		printf("	Test 209 output: %hi\n",res);
		printf("	Test 209 expected: 50\n");
	}
	else printf("Test 209 passed\n");
	return 0;
}