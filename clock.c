#include <stdio.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
    int year,month,day,hour,min,sec;
    year=2024;
    month=2;
    day=28;
    hour=23;
    min=59;
    sec=55;
    while(1){
        sec++;
		if(sec==60) //秒
		{
			sec=0;
			min++;
		}
		if(min>=60) //分
		{
			min=0;
			hour++;
		}
		if(hour>=24) //时
		{
			hour=0;
			day++;
		}
		if(((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))&&(day>31)) //31天
		{
			day = 1;
			month++;
		}
		else if(((month==4)||(month==6)||(month==9)||(month==11))&&(day>30)) //30天
		{
			day = 1;
			month++;
		}
		else if((((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))&&(month==2)&&(day>29))   //润:29
		{
			day = 1;
			month++;
		}
		else if((((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))&&(month==2)&&(day>28))  //普通年
		{
			day = 1;
			month++;
		}
		else
		{
			//nothing
		}

		if(month>=12)   //月
		{
			month=1;
			year++;
		}

        printf("%d-%02d-%02d %02d:%02d:%02d\r",
                year,month,day,hour,min,sec);                   
        fflush(stdout); //刷新缓冲区数据到终端
        sleep(1);
    }
    return 0;
}