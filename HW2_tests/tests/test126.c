#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -1125444227117783191);
	if(res != 11)	{
		printf("Test 126 failed:\n");
		printf("	Test 126 output: %hi\n",res);
		printf("	Test 126 expected: 11\n");
	}
	else printf("Test 126 passed\n");
	return 0;
}