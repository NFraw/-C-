#include<stdio.h>
int main(){
    int year, month;
    scanf("%d%d", &year, &month);
    printf("%d年的%d月有",year,month);
    switch(month){
        case 1:printf("31天\n");break;
        case 2:if(year % 4 == 0 && !(year % 100 == 0) || year % 400 == 0){
            printf("29天\n");
        }
        else{
            printf("28天\n");
        };break;
        case 3:printf("31天\n");break;
        case 4:printf("30天\n");break;
        case 5:printf("31天\n");break;
        case 6:printf("30天\n");break;
        case 7:printf("31天\n");break;
        case 8:printf("31天\n");break;
        case 9:printf("30天\n");break;
        case 10:printf("31天\n");break;
        case 11:printf("30天\n");break;
        case 12:printf("31天\n");break;
        default:printf("输入月份有误！\n");break;
    }
    return 0;
}