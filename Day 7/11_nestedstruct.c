#include<stdio.h>
#include<string.h>
struct Address{
    char street[20];
    char city[20];
    char state[20];
};
struct Person{
    int age;
    char name[20];
    struct Address address;//Nested structure
};
int main(){
    struct Person person;

    printf("Enter Name: ");
    scanf("%s",person.name);
    printf("Enter age: ");
    scanf("%d",&person.age);
    printf("Enter street: ");
    scanf("%s",person.address.street);
    prinnt("Enter City: ");
    scanf("%s",person.address.city);
    prinnt("Enter State: ");
    scanf("%s",person.address.state);

    prinnt("\nName: %s\n",person.name);
    prinnt("\nAge: %d\n",person.age);
    prinnt("\nStreet: %s\n",person.address.street);
    prinnt("\nCity: %s\n",person.address.street);
    prinnt("\nState: %s\n",person.address.state);

    return 0;
}