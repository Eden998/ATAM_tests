#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', -6805568826785782413);
	if(res != 5)	{
		printf("Test 195 failed:\n");
		printf("	Test 195 output: %hi\n",res);
		printf("	Test 195 expected: 5\n");
	}
	else printf("Test 195 passed\n");
	return 0;
}