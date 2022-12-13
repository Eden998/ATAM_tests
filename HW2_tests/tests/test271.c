#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', 28);
	if(res != 148)	{
		printf("Test 271 failed:\n");
		printf("	Test 271 output: %hi\n",res);
		printf("	Test 271 expected: 148\n");
	}
	else printf("Test 271 passed\n");
	return 0;
}