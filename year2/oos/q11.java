public class q11{
    public static void main(String [] args){
        Library library = new Library();
        Book book1 = new Book(100,50, "book1", "author1");
        Book book2 = new Book(200,100, "book2", "author2");
        Book book3 = new Book(300,150, "book3", "author3");
        Journal journal1 = new Journal(100,50, "journal1", "journal1");
        Journal journal2 = new Journal(200,100, "journal2", "journal2");
        
        library.addPublication(book1);
        library.addPublication(book2);
        library.addPublication(book3);
        library.addPublication(journal1);
        library.addPublication(journal2);
        library.print();
    }
}


abstract class Publication{
    int noOfPages;
    double price;
    String publisherName;
    Publication(){
        this.noOfPages = 0;
        this.price = 0;
        this.publisherName = "";
    }
    Publication(int noOfPages,double price,String publisherName){
        this.noOfPages = noOfPages;
        this.price = price;
        this.publisherName = publisherName;
    }
    void setNoOfPages(int noOfPages){
        this.noOfPages = noOfPages;
    }
    void setPrice(double price){
        this.price = price;
    }
    void setPublisherName(String publisherName){
        this.publisherName = publisherName;
    }
    int getNoOfPages(){
        return this.noOfPages;
    }
    double getPrice(){
        return this.price;
    }
    String getPublisherName(){
        return this.publisherName;
    }
}

class Book extends Publication{
    String authorName;
    Book(){
        super();
        this.authorName = "";
    }
    Book(int noOfPages,double price,String publisherName,String authorName){
        super(noOfPages,price,publisherName);
        this.authorName = authorName;
    }
    void setAuthorName(String authorName){
        this.authorName = authorName;
    }
    String getAuthorName(){
        return this.authorName;
    }
}

class Journal extends Publication{
    String journalName;
    Journal(){
        super();
        this.journalName = "";
    }
    Journal(int noOfPages,double price,String publisherName,String journalName){
        super(noOfPages,price,publisherName);
        this.journalName = journalName;
    }
    void setJournalName(String journalName){
        this.journalName = journalName;
    }
    String getJournalName(){
        return this.journalName;
    }
}

class Library{
    Publication [] publications;
    int noOfPublications;
    Library(){
        publications = new Publication[1000];
        noOfPublications = 0;
    }
    void addPublication(Publication publication){
        publications[noOfPublications++] = publication;
    }
    void print(){
        for(int i = 0;i<noOfPublications;i++){
            System.out.println("Publication " + (i+1));
            System.out.println("No of Pages: " + publications[i].getNoOfPages());
            System.out.println("Price: " + publications[i].getPrice());
            System.out.println("Publisher Name: " + publications[i].getPublisherName());
            if(publications[i] instanceof Book){
                System.out.println("Author Name: " + ((Book)publications[i]).getAuthorName());
            }
            else if(publications[i] instanceof Journal){
                System.out.println("Journal Name: " + ((Journal)publications[i]).getJournalName());
            }
            System.out.println();
        }
    }
}