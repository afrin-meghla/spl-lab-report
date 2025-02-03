#include<stdio.h>
int main(){
    int month,year,day;
    printf("How many days ");
    scanf("%d",&day);
    year=day/365;
    day=day%365;
    month=day/30;
    day=day%30;
    printf("month=%d,day=%d,year=%d",month,day,year);
return 0;

}
