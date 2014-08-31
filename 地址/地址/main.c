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
    return 0;
}
















