#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -2157553449883825427);
	if(res != 9)	{
		printf("Test 106 failed:\n");
		printf("	Test 106 output: %hi\n",res);
		printf("	Test 106 expected: 9\n");
	}
	else printf("Test 106 passed\n");
	return 0;
}