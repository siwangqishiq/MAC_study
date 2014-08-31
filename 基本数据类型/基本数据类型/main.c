//
//  main.c
//  基本数据类型
//
//  Created by  潘易  on 14-8-31.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code
    int a = 2, b=2;
    int c;
    c = (++a,a*=3,b = a*5);
    int x;
    int y=2;
    
    x = ++y,y*=3,b=y*5;
    
    printf("c  = %d \n",c);
    printf("x = %d \n",x);
    
    size_t size = sizeof(a);
    printf("a 所占字节数:%d\n",size);
    
    size_t int_size = sizeof(int);
    size_t long_size = sizeof(long);
    size_t unsign_size = sizeof(unsigned int);
    size_t float_size = sizeof(float);
    
    printf("整型数据所占字节数 %d\n",int_size);
    printf("长整型数据所占字节数 %d\n",long_size);
    printf("无符号整型数据所占字节数 %d\n",unsign_size);
    printf("浮点数据所占字节数 %d\n",float_size);
    
    return 0;
}

