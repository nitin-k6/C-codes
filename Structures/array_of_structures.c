#include<stdio.h>
#include<string.h>

struct students{
int rollno;
char name[10];
};
int main(){
 int i;
struct students st[5];
printf("Enter record of 5 students\n");
for(i=0;i<5;i++){
    printf("Enter rollno :\n\n");
    scanf("%d" , &st[i].rollno);
     printf("Enter Name :\n");
    scanf("%s" , &st[i].name);
}
printf("Student Information List\n:");
for(i=0;i<5;i++){
    printf("%d, %s" ,st[i].rollno, st[i].name);
}
    return 0;
}