#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

union Book
{
    int pages;
    float price;
    char title[20];
};

int main()
{
    union Student s1;
    strcpy(s1.name, "Harry");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);

    union Book b1;
    b1.pages = 100;
    printf("Pages: %d\n", b1.pages);
    b1.price = 250.5;
    printf("Price : %.1f\n", b1.price);
    strcpy(b1.title, "C Programming");
    printf("Title : %s\n", b1.title);

    return 0;
}
