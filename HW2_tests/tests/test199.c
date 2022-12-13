#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', -880588123442991526);
	printf("Test 199 output: %hi\n",res);
	assert(res == 13);
	return 0;
}