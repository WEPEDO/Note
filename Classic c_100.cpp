/*
 * @Author: WenPeidong
 * @LastEditors: WenPeidong
 * @Description: file content
 * @Date: 2019-04-18 13:49:41
 * @LastEditTime: 2019-04-18 14:14:52
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

// 程序2
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