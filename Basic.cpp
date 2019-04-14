/*
 * @Author: WenPeidong
 * @LastEditors: WenPeidong
 * @Description: file content
 * @Date: 2019-04-12 12:32:17
 * @LastEditTime: 2019-04-14 11:51:26
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

/**
 * 复合文字结构
 * 
 * 复合文字签发不仅适用于数组， 也适用于结构。
 * 可以使用复合文字创建一个被用来作为函数参数或被赋值给另一个结构的结构。
 * 语法是把类型名写在圆括号中，后跟一个用花括号括起来的初始化项目列表
 * e.g:  (struct phonebook) {"zhangsan" ,"21198128989"}
 **/



/**
 * struct之于c好比class之于c++， 
 * 在实际开发中，c的基本数据结构有不能满足开发要求，只能通过struct定义新的数据类型
 *联合类型  关键字  union   联合联合就是联合使用内存
 *e.g:  union PhoneBook{
    int number;
    int telphone;
    char name[20];
 }
 **/


// # include<stdio.h>
// # include<stdlib.h>

// union PhoneBook{
//     int number;
//     int telphone;
//     char name[30];
// };

// int main()
// {
//     PhoneBook A;
//     gets(A.name);
//     printf("%s\n", A.name);
//     A.number = 1;
//     printf("%s,%d\n", A.name, A.number);
//     A.telphone = 1353462;
//     printf("%s,%d,%d\n", A.name, A.number, A.telphone);
//     system("pause");
//     return 0;
// }

// 资源管理
// 主要 有两个函数 malloc()  free()
/**
 * double *ptr
 * ptr = (double *)malloc(50*sizeof(double))
 * 这段代码请求 50 个 double 类型值的空间， 并且把 ptr 指向该空间的所在位置。
 * 注意 ptr 是作为指向一个 double 类型值的指针声明的，而不是指向 50个 double 类型值的数据块的指针。
 * */
/**
 * 更为普通的使用方法
 * T* ptr;
 * ptr = (T*)malloc(sixeof(T)*n)
 * ptr = (T*) calloc(n, sizeof(T));
**/


// // 文件读取
// # include<stdio.h>
// # include<stdlib.h>

// int main()
// {
//     char ch[44];
//     FILE *ftp;
//     ftp = fopen("lili.txt", "r");
//     if(ftp == NULL)
//         printf("open file filed");
//     fgets(ch, 44, ftp); //  fgets()他可以读取一连串的字符串，但是会在碰到回车后停止读取
//     fputs(ch, stdout);
//     system("pause");
//     return 0; 
// }

// 每个文件都有一个结尾符，便是End Of File，
//在C/C++里，我们称它为EOF，而fgets同样不例外，在遇到eof之后便不会再读取了，所以我们便利用这一点来控制这个循环。
//又由于fgets()返回一个指向char的指针，这将和eof类型不同，在这里我们不能强制转换
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char ch[44];
//     FILE *ftp;
//     ftp = fopen("lili.txt", "r");
//     if (ftp == NULL)
//         printf("open file filed");
//     while(fgets(ch,44,ftp) != NULL) //  修改
//         fputs(ch, stdout);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char ch[44];
//     FILE *ftp;
//     FILE *ftp2;
//     ftp = fopen("lili.txt", "r");
//     ftp2 = fopen("write.txt", "w");
//     if (ftp == NULL)
//         printf("open file filed");
//     while (fgets(ch, 44, ftp) != NULL) 
//         fputs(ch, ftp2);
//     system("pause");
//     return 0;
// }
