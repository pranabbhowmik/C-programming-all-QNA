#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp)
{
    printf("The employee code is :%d\n",emp.code);
    printf("The employee salary is :%f\n",emp.salary);
    printf("The employee name is :%s\n",emp.name);
}
int main(){
    struct employee e1;
    struct employee (*ptr);
    ptr=&e1;
    ptr->code=101;
    ptr->salary=1200.342;
    strcpy(ptr->name,"Pranab");
    show(e1);
    return 0;
}

