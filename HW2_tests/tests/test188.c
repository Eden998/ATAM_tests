#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 266529975004974879);
	printf("Test 188 output: %hi\n",res);
	assert(res == 5);
	return 0;
}