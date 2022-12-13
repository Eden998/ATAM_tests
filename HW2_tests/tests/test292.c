#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 703572048069059385);
	printf("Test 292 output: %hi\n",res);
	assert(res == 71);
	return 0;
}