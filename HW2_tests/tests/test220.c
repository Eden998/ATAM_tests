#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 90);
	printf("Test 220 output: %hi\n",res);
	assert(res == 25);
	return 0;
}