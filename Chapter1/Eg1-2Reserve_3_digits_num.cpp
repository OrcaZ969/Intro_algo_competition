#include <stdio.h>
#include <math.h>
int main(){
    /*int n;
    scanf("%d",&n);
    printf("%d%d%d\n",n%10,n/10%10,n/100);
    */
    int n,m;
    scanf("%d",&n);
    m= (n/100)+(n/10%10)*10+n%10*100;
    printf("%03d\n",m);
    //"%03d" 3 digit number filled with 0 on the left side
    //"%3d" 3 digit number filled with spaces on the left side
    return 0;
}
