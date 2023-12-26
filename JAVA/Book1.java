/* Create a class called Book that contains instance variables like BKName, BKId and BKAuthor, a parameterized constructor to initialize its instance variables, a method BKUpdateDetails(String name, int id, String author), that accepts new values for name, Id and author as parameters and updates the corresponding instance variable values of that object and another method BKDisplay() to display the book details. Create a class BookDemo and provide main method for instantiate a Book object, display the original book details, update its details with new values, and display the updated book details.*/
import java.util.*;

class Book {
    private String BKName;
    private int BKId;
    private String BKAuthor;

    public Book(String BKName, int BKId, String BKAuthor) {
        this.BKName = BKName;
        this.BKId = BKId;
        this.BKAuthor = BKAuthor;
    }

    public void BKUpdateDetails(String name, int id, String author) {
        this.BKName = name;
        this.BKId = id;
        this.BKAuthor = author;
    }

    public void BKDisplay() {
        System.out.println("Book Name: " + BKName);
        System.out.println("Book Id: " + BKId);
        System.out.println("Book Author: " + BKAuthor);
    }
}

class Book1{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String bookName, bookAuthor;
        int bookId;

        System.out.println("Enter book name: ");
        bookName = in.nextLine();
        
        System.out.println("Enter book author: ");
        bookAuthor = in.nextLine();

        System.out.println("Enter book ID: ");
        bookId = in.nextInt();
	in.nextLine();

        Book book = new Book(bookName, bookId, bookAuthor);

        System.out.println("Original book details:");
        book.BKDisplay();

        System.out.println("Enter the new book name: ");
        bookName = in.nextLine();

        System.out.println("Enter the new book author: ");
        bookAuthor = in.nextLine();

        System.out.println("Enter the new book ID: ");
        bookId = in.nextInt();
	in.nextLine();

        book.BKUpdateDetails(bookName, bookId, bookAuthor);

        System.out.println("Updated book details:");
        book.BKDisplay();

        in.close();
    }
}