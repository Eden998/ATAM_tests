#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 697686113189162168);
	printf("Test 259 output: %hi\n",res);
	assert(res == 65);
	return 0;
}