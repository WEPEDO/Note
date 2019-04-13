/*
 * @Author: WenPeidong
 * @LastEditors: WenPeidong
 * @Description: file content
 * @Date: 2019-04-12 12:32:17
 * @LastEditTime: 2019-04-13 14:25:25
 */
// # include<stdio.h>
// # include<stdlib.h>

// int main()
// {
//     printf("记住今天，手一抖把代码给删了。。。");
//     system("pause");
//     return 0;
// }

char* copy(char* dest, const char* src)
{
       if((dest = NULL) && (src = NULL))
       {
             printf("无效参数。");
             return NULL;
       }
       char* get = dest;
       memcopy(dest,src,strlen(src)+1);
       return get;

}

 

char* memcopy(char* dest,const char* src,unsigned int len)
{
        if((dest =NULL) &&(src = NULL))
        {
             printf("无效参数。");
             return NULL;
         }
         char* get = dest;
         if((get+len) <= src || get > (src+len))
         {
               while(len--)
               {
                    *get = *src;
                     get++;
                     src++; 
                 }
         }
         else
         {
                 get = get + len -1;
                 src = src + len - 1;
                 while(len--)
                 {
                        *get = *src;
                         get--;
                         src--;
                  }
        }
       return dest;
}