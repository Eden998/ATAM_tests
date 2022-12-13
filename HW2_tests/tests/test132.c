#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', 262941243047844359);
	printf("Test 132 output: %hi\n",res);
	assert(res == 3);
	return 0;
}