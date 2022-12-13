#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 25);
	if(res != 215)	{
		printf("Test 242 failed:\n");
		printf("	Test 242 output: %hi\n",res);
		printf("	Test 242 expected: 215\n");
	}
	else printf("Test 242 passed\n");
	return 0;
}