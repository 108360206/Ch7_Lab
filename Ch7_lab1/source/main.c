#include <stdio.h>
#include <stdlib.h>

typedef struct _student
{
	char name[5];
	int chinese;
	int english;
	int math;
	int sum;
	float avg;
}student;

int main(void)
{
	student data[5];
	FILE *stream1;
	FILE *stream2;
	int i;

	stream1 = fopen("C://gradedata.txt", "r");
	stream2 = fopen("C://gradeoutput.txt", "w");

	if(stream1== NULL || stream2 == NULL)
	{
		printf("")
	}

	system("pause");
	return 0;
}