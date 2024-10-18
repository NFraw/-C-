/*************************************************************************
        > File Name: 13.HZOJ_146.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 18 Sep 2024 09:56:04 AM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[55];
    scanf("%s", s);
    for(int i = 0; s[i]; i++) {
        if(islower(s[i])){              //与(s[i] >= 'a' && s[i] <= 'z')等价 
            if(s[i] == 'z') s[i] = 'a';
            else s[i] += 1;
        }
        if(isupper(s[i])){              //与(s[i] >= 'A' && s[i] <= 'Z')等价
            if(s[i] == 'Z') s[i] = 'A';
            else s[i] += 1;
        }
    }
    printf("%s\n", s);
    return 0;
}