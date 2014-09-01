//
//  main.c
//  指针
//
//  Created by  潘易  on 14-9-1.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

void test1()
{
    int a;
    a=10;
    
    int *b;
    b=&a;
    
    int *c;
    c = b;
    
    *c = 100;
    
    printf("%d\n",a);
}

void test2()
{
    char a;
    char *b;//定义指针变量b 只能指向char类型的变量
    b = &a;//让指针变量b指向a
    
    //
    *b = 10;//指针运算符  代表访问b所存地址的存贮空间
    
    printf("%d \n",a);
    a=13;
    printf("%d \n",*b);
    
}

void  test3()
{
    char a=10;
    char *b=&a;
    
    char *p="haha 哈哈";
    printf("%s \n",p);
}

int main(int argc, const char * argv[])
{

    // insert code here...
    test3();
    test2();
    test1();
    
    return 0;
}

