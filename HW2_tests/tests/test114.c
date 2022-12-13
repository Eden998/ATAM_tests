#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 871706616061686222);
	printf("Test 114 output: %hi\n",res);
	assert(res == 1);
	return 0;
}