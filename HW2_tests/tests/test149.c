#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -3211754519387680110);
	if(res != 4)	{
		printf("Test 149 failed:\n");
		printf("	Test 149 output: %hi\n",res);
		printf("	Test 149 expected: 4\n");
	}
	else printf("Test 149 passed\n");
	return 0;
}