//
//  main.c
//  GPS
//
//  Created by 20161104607 on 2017/6/16.
//  Copyright © 2017年 20161104607. All rights reserved.
//

#include <stdio.h>
    
    int main()
    {
        int  ;
        char ch[62];
        FILE *fp1,*fp2;
        fp1=fopen("//Users//a20161104607//Desktop//GPS//GPS170510.log ","w");
        fp2=fopen("//Users//a20161104607//Desktop//GPS//GPS170510.log ","r");
        if(fp2==NULL)
        {
            printf("文件输出错误");
        }
        else
        {
            fscanf(fp2,"$GPRMC,,%6s,%c,%1f,%c,%1f,%c,%1f,%1f,%6s,%s",time,7gps,&latitude1,&longitude1,&v,&cours,year,s);
            if(gps==‘A’)
            {
        
            }
        }
    }

