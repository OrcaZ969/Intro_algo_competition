#include <stdio.h>
#include <math.h>
int main(){
    const double PI= acos(-1.0);
    //const double PI=3.1415926;
    double h,r;
    scanf("%lf%lf",&h,&r);
    printf("%.3f\n",2*r*h*PI+2*r*r*PI);
    return 0;
}
