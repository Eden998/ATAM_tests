#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 829141061110433877);
	printf("Test 170 output: %hi\n",res);
	assert(res == 0);
	return 0;
}