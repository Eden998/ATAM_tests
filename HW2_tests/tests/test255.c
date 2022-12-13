#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -916778215479605877);
	printf("Test 255 output: %hi\n",res);
	assert(res == 926);
	return 0;
}