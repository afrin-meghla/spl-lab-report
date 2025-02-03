#include<stdio.h>
int main(){
    int l,w,p,area;
    printf("Enter the value of l,w");
    scanf("%d%d",&l,&w);
    area=l*w;
    p=2*(l+w);
    printf("area=%d \n p=%d",area,p);
return 0;
}
