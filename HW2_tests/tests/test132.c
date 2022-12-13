#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 3412854885431403737);
	if(res != 5)	{
		printf("Test 132 failed:\n");
		printf("	Test 132 output: %hi\n",res);
		printf("	Test 132 expected: 5\n");
	}
	else printf("Test 132 passed\n");
	return 0;
}