#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -89);
	printf("Test 76 output: %hi\n",res);
	assert(res == 12);
	return 0;
}