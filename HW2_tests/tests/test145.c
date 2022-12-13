#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 504436736284200669);
	printf("Test 145 output: %hi\n",res);
	assert(res == 6);
	return 0;
}