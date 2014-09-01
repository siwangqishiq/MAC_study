//
//  main.c
//  字符串
//
//  Created by  潘易  on 14-9-1.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void test_gets();

int main(int argc, const char * argv[])
{

    // insert code here...
    //字符串
    //char c = 'A';
    //char类型的 数组
    //   \0
    char a[]="你好";
    printf("%s \n",a);
    
    char s1[]={'M','l','h','\0'};
    printf("%s \n",s1);
    
    char s2[]={'M','l',' ','A'};//error
    printf("%s \n",s2);
    
    int s1_len = sizeof(s1)/sizeof(char);
    printf("s1长度---> %d\n",s1_len);
    
    //打印字符串 pintf函数  puts函数
    //puts会自动换行
    puts("ios");
    puts("大舰巨炮");
    
    puts("Hello World!\n");
    
    //字符串的输入    gets 函数   scanf 函数
    char s[100];
    printf("输入字符串:\n");
    scanf("%s", s);
    printf("输入的字符串--->%s\n",s);
    
    //gets();
//    gets(s);//读入s
//    printf("gets()函数得到的输入-->%s\n",s);
    //test_gets();
    
    
    //int input;
    //scanf("%d", &input);
    
    //字符处理函数
    putchar('1');
    
    char getc = getchar();//读取一个字符
    
    //字符串处理函数
    
    return 0;
}

void test_gets()
{
    char s[100];
    printf("gets函数  读取输入 :\n");
    gets(s);
    
    printf("输入为---> %s\n",s);
}

