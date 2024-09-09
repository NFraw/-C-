/*************************************************************************
        > File Name: 23.work6.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 09:58:23 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    switch(month){
        case 1:
            if(day < 0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        case 2:
            if((year % 4 == 0 && !(year % 100 == 0)) || (year % 400 == 0)){
                if(day < 0 || day > 29) printf("NO\n");
                else printf("YES\n");
            }
            else if(day < 0 || day > 28) printf("NO\n");
            else printf("YES\n");
            break;
        case 3:
            if(day < 0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        case 4:
            if(day < 0 || day > 30) printf("NO\n");
            else printf("YES\n");
            break;
        case 5:
            if(day<0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        case 6:
            if(day<0 || day > 30) printf("NO\n");
            else printf("YES\n");
            break;
        case 7:
            if(day<0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        case 8:
            if(day<0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        case 9:
            if(day<0 || day > 30) printf("NO\n");
            else printf("YES\n");
            break;
        case 10:
            if(day<0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        case 11:
            if(day<0 || day > 30) printf("NO\n");
            else printf("YES\n");
            break;
        case 12:
            if(day<0 || day > 31) printf("NO\n");
            else printf("YES\n");
            break;
        default:
            printf("NO\n");
            break;
    }
    return 0;
}