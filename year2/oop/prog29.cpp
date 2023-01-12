#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
string isbn;
string title;
string authors;
double price;
public:

Book(string isbn= "", string title = "", string authors = "", double price =0.0) : isbn(isbn), title(title), authors(authors), price(price) {}

~Book() {}
string getIsbn() const { return isbn; }
string getTitle() const { return title; }
string getAuthors() const { return authors; }
double getPrice() const { return price; }
};

class BookStore
{
private:
Book books1[100];
int noOfBooks;
public:

BookStore() : noOfBooks(0) {}

~BookStore() {}

void addBook(Book book) {
books1[noOfBooks++] = book;
}
void books()
{
for (int i = 0; i < noOfBooks; i++) {
string isbn = books1[i].getIsbn();
bool unique = true;
for (int j = 0; j < i; j++)
{
if (isbn == books1[j].getIsbn())
{
unique = false;
break;
}
}
if (unique)
{
cout << isbn << endl;
}

}
}
int noOfCopies(string isbn)
{
int count = 0;
for (int i = 0; i < noOfBooks; i++) {
if (isbn == books1[i].getIsbn())
{
count++;
}
}
return count;
}

double totalPrice()
{
double total = 0;
for (int i = 0; i < noOfBooks; i++)
{
total += books1[i].getPrice();
}
return total;
}

void printBookCopies()
{
for (int i = 0; i < noOfBooks; i++)
{
string isbn = books1[i].getIsbn();
int copies = noOfCopies(isbn);
cout << books1[i].getTitle() << " : " << copies << endl;
}
}
};

int main()
{
return 0;
}