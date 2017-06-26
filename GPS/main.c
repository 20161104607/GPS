//
//  main.c
//  GPS
//
//  Created by 20161104607 on 2017/6/16.
//  Copyright © 2017年 20161104607. All rights reserved.
//

#include <stdio.h>
#include <string.h>
    
    int main()
    {
        char time[10],gps1,lat1,longitude1,year[10],s[5];
        double latitude1,longitude1,v,course;
        FILE *fp1,*fp2;
        char Time[10],Lat1,Longitude1,moon[10],S[5],altitude;
        double Latitude1,Longitude1;
        int GPS;
        fp1=fopen("//Users//a20161104607//Desktop//GPS//GPS170510.log","w+");
        fp2=fopen("//Users//a20161104607//Desktop//GPS//maopao.txt ","r");
        if(fp2==NULL)
        {
            printf("打开文件错误");
        }
        else
        {
            while(fscanf(fp2,"$GPRMC,%6s,%c,%1f,&c,%1f,%c,%1f,%1f,%6s,,%3s\n$GPGGA,%6s,%1f,%c,%1f,%c,%d,%2s,,%4s,M,,M,,%3s\n",time,,&gps,&lat,&lat1,&longitude,&longitude1,&v,&course,year,s,Time,&Latitude,&Latitude1,&GPS,moon,altitude,S)!=EOF)
            {
                if(gps=='A')
                {
                    fprintf(fp1,"当前时%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[4],year[5],year[2],year[3],year[0],year[1],time[0],time[1],time[2],time[3],time[4],time[5]);
                    if(lat1=='N')
                    {
                        fprintf(fp1,"该车位于北纬%1f度\n",latitude);
                        printf("该车位于北纬%1f度\n",latitude);
                    }
                    else
                    {
                        fprintf(fp1,"该车位于南纬%1f度\n",latitude);
                        printf("该车位于南纬%1f度\n",latitude);
                    }
                        if(longitude1=='E')
                        {
                            fprintf(fp1,"该车位于东经%1f度\n",longitude);
                            printf("该车位于东经%1f度\n",longitude);
                        }
                        else
                        {
                            fprintf(fp1,"该车位于西经%1f度\n",longitude);
                            printf("该车位于西经%1f度\n",longitude);
                        }
                    fprintf(fp1,e"地面速率是%1f节，地面航向是%1f度\n",v,cours);
                    printf("地面速率是%1f节，地面航向是%1f度\n",v,cours);
                    }
                  else
                  {
                      fprintf(fp1,"GPRMC无效定位\n");
                      printf("GPRMC无效定位\n");
                  }
                fprintf(fp1,"GPS状态是: ");
                printf("GPS状态是: ");
                switch(GPS)
                {
                    case 0;
                        fprintf(fp1,"初始化\n")；
                        printf("初始化\n")；
                        break;
                    case 1;
                        fprintf(fp1,"单点定位\n")；
                        printf("单点定位\n")；
                        break;
                    case 2;
                        fprintf(fp1,"码差分\n")；
                        printf("码差分\n")；
                        break;
                    case 3;
                        fprintf(fp1,"无效PPS\n")；
                        printf("无效PPS\n")；
                        break;
                    case 4;
                        fprintf(fp1,"固定解\n")；
                        printf("固定解\n")；
                        break;
                    case 5;
                        fprintf(fp1,"浮点解\n")；
                        printf("浮点解\n")；
                        break;
                    case 6;
                        fprintf(fp1,"正在估算\n")；
                        printf("正在估算\n")；
                        break;
                    case 7;
                        fprintf(fp1,"人工输入固定值\n")；
                        printf("人工输入固定值\n")；
                        break;
                    case 8;
                        fprintf(fp1,"模拟模式\n")；
                        printf("模拟模式\n")；
                        break;
                    case 9;
                        fprintf(fp1,"WAAS差分\n")；
                        printf("WAAS差分\n")；
                        break;
                        default;
                        break;
                        
                    }
                fprintf(fp1,"使用卫星数量:%s\n",moon);
                fprintf(fp1,"海拔高度:%s\n",altitude);
                printf("使用卫星数量:%s\n",moon);
                printf("海拔高度:%s\n",altitude);
                printf("\n");
                fprintf(fp1,"\n");
                }
            }
        fclose(fp1);
        fclose(fp2);
        }
        //fscanf(fr,"%s %s",str1,str2);
        //printf("结果:%s\n %s\n",str1,str2);
            //for(i=0;i<8;i++)
            //lat[i]=str1[i+16];
            //lat[8]='\0';
            //printf("纬度:%s\n",lat);
            //fclose(fr);
            //return 0;
        }
