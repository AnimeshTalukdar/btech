class q8{
     public static void main(String[] args) {
        String[] authors = {"Author 1", "Author 2"};
        Book book1 = new Book("Book 1", authors, 100, 100.0, "Publisher 1");
        Book book2 = new Book("Book 2", authors, 200, 200.0, "Publisher 2");
        Book book3 = new Book("Book 3", authors, 300, 300.0, "Publisher 3");
        Book book4 = new Book("Book 4", authors, 400, 400.0, "Publisher 4");
        Book book5 = new Book("Book 5", authors, 500, 500.0, "Publisher 5");
        Book[] books = {book1, book2, book3, book4, book5};
        Library library = new Library(books);
        System.out.println("Total price of all books: " + library.getTotalPrice());

    }
}


class Book {
    String title;
    String[] authors;
    int pages;
    double price;
    String publisher;

    Book(String title, String[] authors, int pages, double price, String publisher) {
        this.title = title;
        this.authors = authors;
        this.pages = pages;
        this.price = price;
        this.publisher = publisher;
    }

    void setTitle(String title) {
        this.title = title;
    }

    void setAuthors(String[] authors) {
        this.authors = authors;
    }

    void setPages(int pages) {
        this.pages = pages;
    }

    void setPrice(double price) {
        this.price = price;
    }

    void setPublisher(String publisher) {
        this.publisher = publisher;
    }

    String getTitle() {
        return this.title;
    }

    String[] getAuthors() {
        return this.authors;
    }

    int getPages() {
        return this.pages;
    }

    double getPrice() {
        return this.price;
    }

    String getPublisher() {
        return this.publisher;
    }
}


class Library {
    Book[] books;

    Library(Book[] books) {
        this.books = books;
    }

    void addBook(Book book) {
        Book[] newBooks = new Book[this.books.length + 1];
        for (int i = 0; i < this.books.length; i++) {
            newBooks[i] = this.books[i];
        }
        newBooks[this.books.length] = book;
        this.books = newBooks;
    }

    void removeBook(Book book) {
        Book[] newBooks = new Book[this.books.length - 1];
        int j = 0;
        for (int i = 0; i < this.books.length; i++) {
            if (this.books[i] != book) {
                newBooks[j] = this.books[i];
                j++;
            }
        }
        this.books = newBooks;
    }

    double getTotalPrice() {
        double totalPrice = 0;
        for (int i = 0; i < this.books.length; i++) {
            totalPrice += this.books[i].getPrice();
        }
        return totalPrice;
    }
}
  