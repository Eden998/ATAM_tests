#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 3);
	printf("Test 213 output: %hi\n",res);
	assert(res == 50);
	return 0;
}