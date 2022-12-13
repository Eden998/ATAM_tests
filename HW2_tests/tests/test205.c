#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -49);
	printf("Test 205 output: %hi\n",res);
	assert(res == 615);
	return 0;
}