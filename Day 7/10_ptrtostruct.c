#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[20];
        float marks;
    };
    struct person p1={19,"Rakesh",70.99};
    struct person *ptr=&p1;

    printf("Age is: %d\n",ptr ->age);
    printf("The Name is: %s\n",ptr ->name);
    printf("Marks is: %.2f\n",ptr ->marks);

    return 0;
}