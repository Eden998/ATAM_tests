#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -595135931301405676);
	printf("Test 206 output: %hi\n",res);
	assert(res == 466);
	return 0;
}