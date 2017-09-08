#include <stdio.h>
// URI online Judge 1708. 
int main() {
 
     int x,y, v=0, som1=0, som2=0, t=0;
    scanf("%d %d",&x,&y);
    
    while (t < y){
            som1 += x;
            som2 += y;
            t = som2 - som1;
            v++;
    }
    printf("%d\n",v);
 
    return 0;
}
