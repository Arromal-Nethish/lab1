#include <stdio.h>

int main()
{
    long int totalSeconds = 31558150;
    long int days, hours, minutes;

    days = totalSeconds / 86400;
    totalSeconds = totalSeconds % 86400;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;

    printf("Days = %ld\n", days);
    printf("Hours = %ld\n", hours);
    printf("Minutes = %ld\n", minutes);

    return 0;
}
