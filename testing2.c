#include <stdio.h>
#include <string.h>
//permainan kata unik
int main() {
   char testkata1[50], testkata2[50];

   scanf("%s", testkata1);
   scanf("%s", testkata2);

   if(strlen(testkata1) != strlen(testkata2)){
    printf("BERBEDA\n");
   } else{
    if (strcmp(testkata1, testkata2) == 0) {
        printf("IDENTIK\n");
    } else{
        printf("MIRIP\n");
    }
   }
   return 0;
}