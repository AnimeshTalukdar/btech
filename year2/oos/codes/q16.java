import java.util.Scanner;
class q16 {
  public static void main(String[] args) {
    Book[] books = new Book[3];
    books[0] = new Book("Author 1", "Book 1", "Publisher 1", 10, 5);
    books[1] = new Book("Author 2", "Book 2", "Publisher 2", 12, 3);
    books[2] = new Book("Author 3", "Book 3", "Publisher 3", 8, 2);

    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the title of the book: ");
    String title = scanner.nextLine();
    title = title.trim();
    System.out.print("Enter the author of the book: ");
    String author = scanner.nextLine();
    author = author.trim();
    Book foundBook = null;
    for (Book book : books) {
      if (book.getTitle().equalsIgnoreCase(title) && book.getAuthor().equalsIgnoreCase(author)) {
        foundBook = book;
        break;
      }
    }

    if (foundBook == null) {
      System.out.println("Book not found.");
    } else {
      foundBook.displayBookDetails();

      System.out.print("Enter the number of copies required: ");
      int requiredCopies = scanner.nextInt();

      if (foundBook.checkAvailability(requiredCopies)) {
        double totalCost = foundBook.calculateTotalCost(requiredCopies);
        System.out.println("Total cost: Rs." + totalCost);

        foundBook.updateStock(requiredCopies);
      } else {
        System.out.println("Required copies not in stock.");
      }
    }
  }
}


class Book {
  String author;
  String title;
  String publisher;
  double cost;
  int stockPosition;

  Book(String author, String title, String publisher, double cost, int stockPosition) {
    this.author = author;
    this.title = title;
    this.publisher = publisher;
    this.cost = cost;
    this.stockPosition = stockPosition;
  }

  String getAuthor() {
    return author;
  }

  String getTitle() {
    return title;
  }

  String getPublisher() {
    return publisher;
  }

  double getCost() {
    return cost;
  }

  int getStockPosition() {
    return stockPosition;
  }

  void displayBookDetails() {
    System.out.println("Title: " + title);
    System.out.println("Author: " + author);
    System.out.println("Publisher: " + publisher);
    System.out.println("Cost: Rs." + cost);
    System.out.println("Stock Position: " + stockPosition);
  }

  boolean checkAvailability(int requiredCopies) {
    return stockPosition >= requiredCopies;
  }

  double calculateTotalCost(int requiredCopies) {
    return cost * requiredCopies;
  }

  void updateStock(int requiredCopies) {
    stockPosition -= requiredCopies;
  }
}

