#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', -922345195879749058);
	printf("Test 111 output: %hi\n",res);
	assert(res == 13);
	return 0;
}