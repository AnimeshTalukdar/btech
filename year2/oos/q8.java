import java.util.*;


class Book {
    String title;
    String[] authors;
    int numOfPages;
    double price;
    String publisher;

     Book(String title, String[] authors, int numOfPages, double price, String publisher) {
        this.title = title;
        this.authors = authors;
        this.numOfPages = numOfPages;
        this.price = price;
        this.publisher = publisher;
    }

     String getTitle() {
        return title;
    }

     String[] getAuthors() {
        return authors;
    }

     int getNumOfPages() {
        return numOfPages;
    }

     double getPrice() {
        return price;
    }

     String getPublisher() {
        return publisher;
    }

     void setTitle(String title) {
        this.title = title;
    }

     void setAuthors(String[] authors) {
        this.authors = authors;
    }

     void setNumOfPages(int numOfPages) {
        this.numOfPages = numOfPages;
    }

     void setPrice(double price) {
        this.price = price;
    }

     void setPublisher(String publisher) {
        this.publisher = publisher;
    }
}

class Library {
    Book[] books;
    int numOfBooks;

     Library() {
        this.books = new Book[100];
        this.numOfBooks = 0;
    }

     void addBook(Book book) {
        this.books[numOfBooks] = book;
        this.numOfBooks++;
    }

     void removeBook(int index) {
        for (int i = index; i < numOfBooks - 1; i++) {
            this.books[i] = this.books[i+1];
        }
        this.books[numOfBooks - 1] = null;
        this.numOfBooks--;
    }

     double getTotalPrice() {
        double totalPrice = 0;
        for (int i = 0; i < numOfBooks; i++) {
            totalPrice += this.books[i].getPrice();
        }
        return totalPrice;
    }

}
class q8{
     public static void main(String[] args) {
        Library library = new Library();

        Book book1 = new Book("book1", new String[]{"author1"}, 233, 33, "publisher1");
        Book book2 = new Book("book2", new String[]{"author2-1", "author2-2"}, 343, 43, "publisher2");
        Book book3 = new Book("book3", new String[]{"author3-1", "author3-2"}, 455,55 , "publisher3");
        Book book4 = new Book("book4", new String[]{"author4"}, 700, 35.25, "publisher4");
        Book book5 = new Book("book5", new String[]{"author5-1", "author5-2"}, 912, 12, "publisher5");

        library.addBook(book1);
        library.addBook(book2);
        library.addBook(book3);
        library.addBook(book4);
        library.addBook(book5);

        double totalPrice = library.getTotalPrice();
        System.out.println("Total price of all books: " + totalPrice);
    }
}
