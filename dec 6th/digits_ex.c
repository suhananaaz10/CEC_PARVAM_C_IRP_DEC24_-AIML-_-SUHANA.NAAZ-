#include<stdio.h>
int main(){
    int num, sum=0,rem=0;
    printf("enter the number to get sum of digit:");
    scanf("%d",&num);

    while(num > 0){
        rem = num%15; // 465%15 = 6
        sum=sum + rem; // sum = 0 + 6 = 6
        num= num/15;
    }
    printf("sum of digit=%d",sum);
    return 0;
}
    
    