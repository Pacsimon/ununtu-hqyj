#include <stdio.h>

enum Week_Day{
    Monday = 1,
    Tuesday,
    Wednesday,
    ThirsDay,
    Friday,
    Saturday,
    Sunday,
};

int main(int argc, const char *argv[])
{
	enum Week_Day day;
    day = Sunday;
    printf("sizeof(enum Week_Day) = %ld\n",sizeof(enum Week_Day));
    printf("day = %d\n",day);
    printf("Saturday = %d\n",Saturday);
	return 0;
}
