#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -20);
	printf("Test 98 output: %hi\n",res);
	assert(res == 7);
	return 0;
}