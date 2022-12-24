#include<stdio.h>
#include<conio.h>

struct book
{
char book_title[20];
char author[20];
float amount;
}b1;

/*void display(struct book b1)
{
    printf("book name %s",b1.book_title);
    printf("author name is %s",b1.author);
    printf("price is %f",b1.amount);
}*/

int main()
{
    struct book b1;
    fflush(stdin);

      printf("name %s",b1.book_title);
    scanf("%[^\n]s",b1.book_title);
    fflush(stdin);

    printf("author name is %s",b1.author);
        scanf("%[^\n]s",b1.author);
    fflush(stdin);
    printf("price is %f",b1.amount);
    scanf("%f",&b1.amount);

    //display(b1);

    printf("\n this program is made by abhay_22ce038");

}
