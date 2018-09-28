/*
* sample 2.2 有50个学生， 要求输出成绩在80分以上的学生的学号和成绩。
*/

#include<stdio.h>

int main() {
    int result[5];
    for (int i = 0; i < 5; i++){
        printf("Enter the %d numbers:", i + 1);
        scanf("%d", &result[i]);
        if (result[i] > 100 || result < 0){
            printf("Enter data error!\n");
        }
    }
    for (int i = 0; i < 5; i++){
        if (result[i] >= 80){
            printf("ID:%d,result:%d\n", i + 1, result[i]);
        }
		
    }
    return 0;
}
