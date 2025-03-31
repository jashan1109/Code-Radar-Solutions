#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);

    int sum = 0;
    sum += sum;
    for(i=1;i<=n;i++){
        sum = sum + n;
        printf("%d",n);
    }
    return 0;
}