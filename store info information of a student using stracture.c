#include<stdio.h>

    void main()
 {
     struct student{

    int roll_no;
    char name[100];
    char stream[100];
    };
    struct student stud;
    printf("\nenter the roll no of the stdent: ");
    scanf("%d",&stud.roll_no);
    printf("\nenter the name of the stdent: ");
    fflush(stdin);
    scanf("%[^\n]",stud.name);
    printf("\nenter the stream of the stdent: ");
    fflush(stdin);
    scanf("%[^\n]",stud.stream);
    printf("STUDENT INFORMATION\n\n::");
    printf("roll_no\t\tname\t\tstream\n");
    printf("--\t\t--\t-\n");
    printf("%4d\t%-20s\t%20s",stud.roll_no,stud.name,stud.stream);


}

