#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', 38);
	printf("Test 83 output: %hi\n",res);
	assert(res == 10);
	return 0;
}