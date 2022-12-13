#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 6835354351425491094);
	if(res != 4)	{
		printf("Test 135 failed:\n");
		printf("	Test 135 output: %hi\n",res);
		printf("	Test 135 expected: 4\n");
	}
	else printf("Test 135 passed\n");
	return 0;
}