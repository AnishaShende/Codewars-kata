/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
char func();
int main()
{
    func();
}
char func(){
  int num;
  int sernum;
  float res = 0;
  scanf("%d", &num);
  for (int i = 0; i < num; i++){
    scanf("%d", &sernum);
    res += sernum;
  }
  printf("\"%.2f\"", res);
}
