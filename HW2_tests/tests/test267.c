#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', 58);
	printf("Test 267 output: %hi\n",res);
	assert(res == 139);
	return 0;
}