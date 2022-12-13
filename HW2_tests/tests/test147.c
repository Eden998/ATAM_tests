#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 245356043331724544);
	printf("Test 147 output: %hi\n",res);
	assert(res == 7);
	return 0;
}