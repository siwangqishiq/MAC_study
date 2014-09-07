//
//  main.c
//  变量类型
//
//  Created by  潘易  on 14-9-7.
//  Copyright (c) 2014年 xinlan. All rights reserved.
// 变量得存贮类型
//

#include <stdio.h>

int a;

void test()
{
    int b = 0;
    b++;
    static int c = 0;
    c++;
    
    printf(" b = %d , c = %d \n",b,c);
}

int main(int argc, const char * argv[])
{

    // insert code here...
    // 变量得作用域 局部变量  全局变量
    // 变量的存贮类型  只变量存贮在什么地方   1.普通内存 2.运行时堆栈  3.硬件寄存器
    /**
     自动变量  静态变量  寄存器变量
     */
    
    //自动变量  存贮在运行时堆栈中
    //被关键字auto修饰的局部变量
    
    
    //静态变量
    // 存贮在静止内存中   所有的全局变量都是静态变量
    //被关键字static 修饰的局部变量
    static int static_index=0;
    
    
    for(int i=0;i<3;i++)
    {
        test();
    }//end for i
    
    //寄存器变量 存贮在硬件寄存器中的变量
    register int register_v = 100;//寄存器变量只能用于局部变量中使用
    register_v++;
    
    return 0;
}



