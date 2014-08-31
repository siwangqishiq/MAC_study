//
//  main.c
//  scanf函数
//
//  Created by  潘易  on 14-8-31.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

void test1()
{
    printf("请输入一个整数:");
    int input;
    scanf("%d",&input);
    
    printf("%d 的平方为 %d\n",input,input*input);
}

void test2()
{
    printf("请输入两个整数:\n");
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("%d + %d =%d \n",a,b,a+b);
}

int main(int argc, const char * argv[])
{

    // insert code here...
    //test1();
    test2();
    return 0;
}

