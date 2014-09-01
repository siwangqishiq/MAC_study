//
//  main.c
//  字符串处理函数
//
//  Created by  潘易  on 14-9-1.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//strlen  返回字符串字符长度
void test1()
{
    int len = strlen("lmg");
    printf("%d\n",len);
    
    int len2 = strlen("陶馨兰");//一个中文占三个字符
    printf("%d\n",len2);
}

//字符串拷贝
void test2()
{
    char s[10];
    strcpy(s, "哈哈!");
    
    printf("%s \n",s);
}

//字符串链接
void test3()
{
    char* ps;
    char s1[]="你好 世界";
    char s2[]="Hello World";
    
    strcat(ps, s1);
    strcat(ps, s2);
    
    printf("%s \n",ps);
}

//字符串比较
void test4()
{
    char s1[] = "abc";
    char s2[] = "abc";
    char s3[] = "aBc";
    char s4[] = "ccb";
    
    printf("%d, %d, %d", strcmp(s1, s2), strcmp(s1, s3), strcmp(s1, s4));
}


int main(int argc, const char * argv[])
{

    // insert code here...
//    printf("Hello, World!\n");
    test4();
    //test3();
    test1();
    test2();
    
    
    return 0;
}

