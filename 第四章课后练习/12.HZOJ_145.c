/*************************************************************************
        > File Name: 12.HZOJ_145.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Tue 17 Sep 2024 11:32:48 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[105], t[105];
    int s_len, t_len = -1; //为了使后面的字符串长度比较能够成功，这里的t_len需要初始化为极小值
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", s);
        s_len = strlen(s);
        if(s_len > t_len) {
            strcpy(t, s);
            t_len = s_len; //将最长字符存储在t_len里面
        }
    }
    printf("%s\n", t); 
    return 0;
}