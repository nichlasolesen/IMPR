#include<stdio.h>
#include <string.h>

int Convert(int*, int);
void Output(int,int,int,int);

int main(void)
{
	const int minute = 60, hour = 3600;

    int hours, minutes, seconds;
    int input, startInput;

	printf("Convert seconds: ");
	scanf("%d", &input);
    startInput = input;

	hours = Convert(&input, hour);
	minutes = Convert(&input, minute);
	seconds = input;

	Output(startInput, seconds, minutes, hours);
    return 0;
}

int Convert(int *seconds, int secPerUnit) 
{
	int temp = *seconds / secPerUnit;
	*seconds %= secPerUnit;
	return temp;
}

void Output(int startSec, int seconds, int minutes, int hours)
{	
	printf("%d seconds is the same as", startSec);
	if(hours != 0)
	{
		printf(" %d %s", hours, hours == 1 ? "hour": "hours");
		if(minutes != 0 || seconds != 0)
			printf("%s", minutes != 0 && seconds != 0 ? ",": " and");
		else
			printf(".\n");
	}
	if(minutes != 0)
	{
		printf(" %d %s", minutes, minutes == 1 ? "minute": "minutes");
		printf("%s", seconds != 0 ? " and": ".\n");
	}
	if(seconds != 0)
		printf(" %d %s", seconds, seconds == 1 ? "second.\n": "seconds.\n");
}