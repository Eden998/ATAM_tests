#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', 341194777480747092);
	printf("Test 248 output: %hi\n",res);
	assert(res == 113);
	return 0;
}