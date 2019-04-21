/*
 * @Author: WenPeidong
 * @LastEditors: WenPeidong
 * @Description: file content
 * @Date: 2019-04-18 13:49:41
 * @LastEditTime: 2019-04-21 12:52:27
 */


/* 
  此文档是 C经典程序100例代码实现
  c语言完成
  以此来加强c的能力
 */

//程序1

// # include<stdlib.h>
// # include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i = 1;i < 5;i ++)
//         for (j = 1; j < 5; j ++)
//             for(k = 1; k < 5; k ++)
//             {
//                 if(i != j&&j != k&&k != i)
//                     printf("%d,%d,%d\n", i,j,k);
//             }    
//     system("pause");
//     return 0;
// }

//程序2
// # include <stdlib.h>
// # include <stdio.h>

// int main()
// {
//     long int i;
//     int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//     scanf("%ld", &i);
//     bonus1 = 100000 * 0.1;
//     bonus2 = bonus1 + 100000 * 0.75;
//     bonus4 = bonus2 + 200000 * 0.5;
//     bonus6 = bonus4 + 200000 * 0.3;
//     bonus10 = bonus6 + 400000 * 0.15;
//         if (i <= 100000)
//            bonus = i * 0.1;
//         else if (i <= 200000)
//             bonus = bonus1 + (i - 100000) * 0.075;
//         else if (i <= 400000)
//             bonus = bonus2 + (i - 200000) * 0.05;
//         else if (i <= 600000)
//             bonus = bonus4 + (i - 400000) * 0.03;
//         else if (i <= 1000000)
//             bonus = bonus6 + (i - 600000) * 0.015;
//         else
//             bonus = bonus10 + (i - 1000000) * 0.01;
//         printf("bonus=%d\n", bonus);
//     system("pause");
//     return 0;
// }

// 程序3
// # include<stdio.h>
// # include<stdlib.h>
// # include<math.h>

// int main()
// {
//     long int i,x, y;
//     for(i = 1; i <1000; i ++)
//         {
//             x = sqrt(i + 100);
//             y = sqrt(i + 168);
//             if(x*x == i+100&&y*y ==1+168)
//                 printf("\n%ld\n", i); 
//         }
//     system("pause");  
//     return 0;      
// }

// 程序4

// # include<stdio.h>
// # include<stdlib.h>

// int main()
// {
//   int day,month,year,sum,leap;
//   printf("\nplease input year,month,day\n");
//   scanf("%d,%d,%d",&year,&month,&day);
//   switch(month)/*先计算某月以前月份的总天数*/
// {
//     case 1:sum=0;break;
//     case 2:sum=31;break;
//     case 3:sum=59;break;
//     case 4:sum=90;break;
//     case 5:sum=120;break;
//     case 6:sum=151;break;
//     case 7:sum=181;break;
//     case 8:sum=212;break;
//     case 9:sum=243;break;
//     case 10:sum=273;break;
//     case 11:sum=304;break;
//     case 12:sum=334;break;
// 	default:
// 		printf("data error");
// 		break;
// 	}
// 	sum = sum + day;									   /*再加上某天的天数*/
// 	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) /*判断是不是闰年*/
// 		leap = 1;
// 	else
// 		leap = 0;
// 	if (leap == 1 && month > 2) /*如果是闰年且月份大于 2,总天数应该加一天*/
// 		sum++;
// 	system("pause");
//     return 0;
// }


// 程序5
// # include<stdio.h>
// # include <stdlib.h>

// int main()
// {
// 	int x, y, z, i;
// 	printf("请输入三个数:\n");
// 	scanf("%d %d %d\n", &x,&y,&z);
// 	if(x>y)
// 		{i = x;x = y;y = i;}
// 	if (x > z)
// 		{i = z;z = x;x = i;}
// 	if (y > z)
// 		{i = y;y = z;z = i;}
// 	printf("从小到大为：%d %d %d\n", x, y, z);
// 	system("pause");
// 	return 0;
// }

// 程序6
// # include<stdio.h>
// # include<stdlib.h>

// main()
// {
// 	printf("Hello C-world!\n");
// 	printf(" ****\n");
// 	printf(" *\n");
// 	printf(" * \n");
// 	printf(" ****\n");
// 	system("pause");
// }

