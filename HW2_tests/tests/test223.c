#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -75);
	printf("Test 223 output: %hi\n",res);
	assert(res == 41);
	return 0;
}