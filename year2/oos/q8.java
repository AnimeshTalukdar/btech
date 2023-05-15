import java.util.*;


class Book {
private String title;
private String[] authors;
private int numOfPages;
private double price;
private String publisher;

public Book(String title, String[] authors, int numOfPages, double price, String publisher) {
this.title = title;
this.authors = authors;
this.numOfPages = numOfPages;
this.price = price;
this.publisher = publisher;
}

public String getTitle() {
return title;
}

public String[] getAuthors() {
return authors;
}

public int getNumOfPages() {
return numOfPages;
}

public double getPrice() {
return price;
}

public String getPublisher() {
return publisher;
}

public void setTitle(String title) {
this.title = title;
}

public void setAuthors(String[] authors) {
this.authors = authors;
}

public void setNumOfPages(int numOfPages) {
this.numOfPages = numOfPages;
}

public void setPrice(double price) {
this.price = price;
}

public void setPublisher(String publisher) {
this.publisher = publisher;
}
}

class Library {
private Book[] books;
private int numOfBooks;

public Library() {
this.books = new Book[100];
this.numOfBooks = 0;
}

public void addBook(Book book) {
this.books[numOfBooks] = book;
this.numOfBooks++;
}

public void removeBook(int index) {
for (int i = index; i < numOfBooks - 1; i++) {
this.books[i] = this.books[i+1];
}
this.books[numOfBooks - 1] = null;
this.numOfBooks--;
}

public double getTotalPrice() {
double totalPrice = 0;
for (int i = 0; i < numOfBooks; i++) {
totalPrice += this.books[i].getPrice();
}
return totalPrice;
}
public static void main(String[] args) {
Library library = new Library();

Book book1 = new Book("Java Programming", new String[]{"John Doe"}, 500, 25.50, "ABC Publishing");
Book book2 = new Book("Python Programming", new String[]{"Jane Smith", "Bob Lee"}, 600, 30.75, "XYZ Publishing");
Book book3 = new Book("Data Structures and Algorithms", new String[]{"Alice Wang", "Tom Chen"}, 800, 40.00, "DEF Publishing");
Book book4 = new Book("Artificial Intelligence", new String[]{"David Kim"}, 700, 35.25, "GHI Publishing");
Book book5 = new Book("Web Development", new String[]{"Sarah Lee", "James Kim"}, 400, 20.00, "PQR Publishing");

library.addBook(book1);
library.addBook(book2);
library.addBook(book3);
library.addBook(book4);
library.addBook(book5);

double totalPrice = library.getTotalPrice();
System.out.println("Total price of all books: " + totalPrice);
}
}
