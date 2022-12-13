#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', -21435321452103873);
	if(res != 5)	{
		printf("Test 175 failed:\n");
		printf("	Test 175 output: %hi\n",res);
		printf("	Test 175 expected: 5\n");
	}
	else printf("Test 175 passed\n");
	return 0;
}