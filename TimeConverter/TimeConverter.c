#include<stdio.h>

int Convert(int* s, int spu);

int main(void)
{
	const int minute = 60, hour = 3600, day = 86400, week = 604800;

    int weeks, days, hours, minutes, seconds;
    int input;
	printf("Convert seconds: ");
	scanf("%d", &input);

	weeks = Convert(&input, week);
	days = Convert(&input, day);
	hours = Convert(&input, hour);
	minutes = Convert(&input, minute);
	seconds = input;

    printf("Weeks: %d\nDays: %d\nHours: %d\nMin.: %d\nSek: %d\n", weeks, days, hours, minutes, seconds);

    return 0;
}

int Convert(int *seconds, int secPerUnit) 
{
	int temp = *seconds / secPerUnit;
	*seconds %= secPerUnit;
	return temp;
}