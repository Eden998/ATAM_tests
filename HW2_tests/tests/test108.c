#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 6068864983453587371);
	if(res != 3)	{
		printf("Test 108 failed:\n");
		printf("	Test 108 output: %hi\n",res);
		printf("	Test 108 expected: 3\n");
	}
	else printf("Test 108 passed\n");
	return 0;
}