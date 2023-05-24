#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int max_of_four (int,int,int,int);
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int w,int x,int y,int z){
    if (w>=x){
        if (w>=y){
            if (w>z){
                return (w);
            }
        }
    }
    if (x>=w){
        if (x>=y){
            if (x>=z){
                return (x);
            }
        }
    }
    if (y>=x){
        if (y>=w){
            if (y>=z){
                return (y);
            }
        }
    }
        return (z);
}