//
//  main.c
//  地址
//
//  Created by  潘易  on 14-8-31.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    
    //查看一个变量的地址
    unsigned int a=15,c=0;
    unsigned char b ='A';
    
    printf("a的地址 %x\n", &a);
    printf("b的地址 %x\n", &b);
    
    int data[5];
    
    size_t data_size = sizeof(data);
    printf("%d\n",data_size);
    
    int dataB[]={1,2,3,4,5,6,7,8,9,10};
    int dataB_len = sizeof(dataB)/sizeof(int);//此方法可求得数组内的元素个数
    printf("数组所含元素个数-->%d\n",dataB_len);
    
    //查看数组的地址
    int age[7];
    printf("%x \n",age);
    printf("%x \n",&age[0]);
    
    //查看每一个数组元素的地址
    printf("每一个数组元素的地址  \n");
    for(int i=0,lens = sizeof(age)/sizeof(int);i<lens;i++)
    {
        printf("%-10x",&age[i]);
    }//end for i
    printf("\n");
    //end
      
    //end
    
    //数组初始化  地址值
    int array[2]={10,13};
    int a2[]={1,2};
    int array3[10]={};
    /*
     数组a[]  []符号代表取内容
     */
    
    int * address_int;
    address_int = array;
    sizeof(address_int);
    
    printf("地址类型所占字节--->%d \n",sizeof(address_int));
    
    float myFloat=10.0f;
    float* p_float =&myFloat;
    
    printf("浮点型数据 指针长度--->%d \n",sizeof(p_float));
    
    
    //二维数组
    int two[][];//
    
    return 0;
}
















