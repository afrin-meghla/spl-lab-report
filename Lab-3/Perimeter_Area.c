#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,v,m,s,area;
    printf("Enter the value of three arm ");
    scanf("%f%f%f",&a,&b,&c);
    s=a+b+c;
    v=s/2;
    m=(v*(v-a)*(v-b)*(v-c));
    area=sqrt(m);
    printf("area=%.2f",area);
    return 0;
}
