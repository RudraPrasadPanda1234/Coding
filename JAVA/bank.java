import java.util.*;
class Bank {
    String name;
    int age;
    double balance;

    public Bank(String name, int age, double balance) {
        this.name = name;
        this.age = age;
        this.balance = balance;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Balance: " + balance);
    }
}
class Saving extends Bank {
    final int min_bal=500;

    public Saving(String name, int age, double balance) {
        super(name, age, balance);    }

    @Override
    public void display() {
        super.display();
        System.out.println("Minimum Balance: " + min_bal);
    }
}
class Current extends Bank {
    final int min_bal=1000;

    public Current(String name, int age, double balance) {
        super(name, age, balance);
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Minimum Balance: " + min_bal);
    }
}

public class bank {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter Saving Account Details:");
        System.out.print("Name: ");
        String savingName = in.nextLine();
        System.out.print("Age: ");
        int savingAge = in.nextInt();
        System.out.print("Balance: ");
        double savingBalance = in.nextDouble();
        in.nextLine(); 
        System.out.println("\nEnter Current Account Details:");
        System.out.print("Name: ");
        String currentName = in.nextLine();
        System.out.print("Age: ");
        int currentAge = in.nextInt();
        System.out.print("Balance: ");
        double currentBalance = in.nextDouble();

        Saving savingAccount = new Saving(savingName, savingAge, savingBalance);
        Current currentAccount = new Current(currentName, currentAge, currentBalance);

        System.out.println("\nSaving Account Details:");
        savingAccount.display();

        System.out.println("\nCurrent Account Details:");
        currentAccount.display();
        in.close();
    }
}
