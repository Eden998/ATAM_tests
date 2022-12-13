#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -9);
	printf("Test 80 output: %hi\n",res);
	assert(res == 12);
	return 0;
}