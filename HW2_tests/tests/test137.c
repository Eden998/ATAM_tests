#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 2669192802500637047);
	if(res != 9)	{
		printf("Test 137 failed:\n");
		printf("	Test 137 output: %hi\n",res);
		printf("	Test 137 expected: 9\n");
	}
	else printf("Test 137 passed\n");
	return 0;
}