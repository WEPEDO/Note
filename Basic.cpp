/*
 * @Author: WenPeidong
 * @LastEditors: WenPeidong
 * @Description: file content
 * @Date: 2019-04-12 12:32:17
 * @LastEditTime: 2019-04-13 15:16:10
 */
// # include<stdio.h>
// # include<stdlib.h>

// int main()
// {
//     printf("记住今天，手一抖把代码给删了。。。");
//     system("pause");
//     return 0;
// }

// char* copy(char* dest, const char* src)
// {
//        if((dest = NULL) && (src = NULL))
//        {
//              printf("无效参数。");
//              return NULL;
//        }
//        char* get = dest;
//        memcopy(dest,src,strlen(src)+1);
//        return get;

// }

 

// char* memcopy(char* dest,const char* src,unsigned int len)
// {
//         if((dest =NULL) &&(src = NULL))
//         {
//              printf("无效参数。");
//              return NULL;
//          }
//          char* get = dest;
//          if((get+len) <= src || get > (src+len))
//          {
//                while(len--)
//                {
//                     *get = *src;
//                      get++;
//                      src++; 
//                  }
//          }
//          else
//          {
//                  get = get + len -1;
//                  src = src + len - 1;
//                  while(len--)
//                  {
//                         *get = *src;
//                          get--;
//                          src--;
//                   }
//         }
//        return dest;
// }
/**
 * 关于 内存是否重叠，牢记两个恒等式
 * array[i] == *(ptr +i)
 * &array[i] == ptr + i
 * */

/** 
 * 结构体
 * 关键字; struct
 * e.g    struct student{
 *     char name[20];
 *     int number;
 *  }
 **/

// # include<stdio.h>
// # include<stdlib.h>

// // 结构体定义
// struct Student{
//        char Name[10];
//        int ID;
// };

// int main()
// {
//     struct Student A;
//     printf("Please input A's Name:\n");
//     gets(A.Name);
//     printf("Please input A's ID:\n");
//     scanf("%d", A.ID);
//     printf("A's Name is : %s\n", A.Name);
//     printf("A's ID is : %d\n", A.ID);
//     system("pause");
//     return 0;
// }
// 复杂版
// # include<stdio.h>
// # include<stdlib.h>

// struct Student{
//        char Name[10];
//        int ID;
// };

// int main()
// {
//        struct Student *A = (struct Student *)malloc(sizeof(struct Student)); 
//        printf("Please input A's Name:\n");
//        gets(A -> Name);
//        printf("Please input A's ID:\n");
//        scanf("%d", &A -> ID);
//        printf("A's Name is : %s\n", A ->Name);
//        printf("A's ID is : %d\n", A ->ID);
//        system("pause");
//        return 0;
// }
