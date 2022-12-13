#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 3124260686242215221);
	if(res != 4)	{
		printf("Test 183 failed:\n");
		printf("	Test 183 output: %hi\n",res);
		printf("	Test 183 expected: 4\n");
	}
	else printf("Test 183 passed\n");
	return 0;
}