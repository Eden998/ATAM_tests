#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 5);
	if(res != 53)	{
		printf("Test 219 failed:\n");
		printf("	Test 219 output: %hi\n",res);
		printf("	Test 219 expected: 53\n");
	}
	else printf("Test 219 passed\n");
	return 0;
}