import java.util.*;
class CSE{
    String SN;
    String regd; 
    int d,o,p,c;
    double avg;
    void input(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Student name:");
        SN = in.nextLine();
        System.out.print("Enter the regd name:");
        regd = in.nextLine();
        System.out.print("Enter the marks for DSA:");
        d= in.nextInt();
        System.out.print("Enter the marks for OOPS:");
        o= in.nextInt();
        System.out.print("Enter the marks for Python:");
        p= in.nextInt();
        System.out.print("Enter the marks for C++:");
        c = in.nextInt();
    }
    void average(){
        avg = (o+d+p+c)/4;
    }
    void display(){
        System.out.println("Student name:"+SN);
        System.out.println("regd no:"+regd);
        System.out.println("Course name: CSE");
        System.out.println("marks for DSA:"+d);
        System.out.println("marks for OOPS:"+o);
        System.out.println("marks for Python:"+p);
        System.out.println("marks for C++:"+c);
        System.out.println("avg marks :"+avg);
    }
}
class ECE{
    String SN;
    String regd;
    String CN; 
    int d,o,p,c;
    double avg;
    void input(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Student name:");
        SN = in.nextLine();
        System.out.print("Enter the regd name:");
        regd = in.nextLine();
        System.out.print("Enter the marks for BEEE:");
        d= in.nextInt();
        System.out.print("Enter the marks for AEE:");
        o= in.nextInt();
        System.out.print("Enter the marks for Communications:");
        p= in.nextInt();
        System.out.print("Enter the marks for DBMS:");
        c = in.nextInt();
    }
    void average(){
        avg = (o+d+p+c)/4;
    }
    void display(){
        System.out.println("Student name:"+SN);
        System.out.println("regd no:"+regd);
        System.out.println("Course name: ECE");
        System.out.println("marks for BEEE:"+d);
        System.out.println("marks for AEE:"+o);
        System.out.println("marks for Communications:"+p);
        System.out.println("marks for DBMS:"+c);
        System.out.println("avg marks :"+avg);
    }
}
class CIVIL{
    String SN;
    String regd;
    String CN; 
    int d,o,p,c;
    double avg;
    void input(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Student name:");
        SN = in.nextLine();
        System.out.print("Enter the regd name:");
        regd = in.nextLine();
        System.out.print("Enter the marks for ARCH:");
        d= in.nextInt();
        System.out.print("Enter the marks for DEGN:");
        o= in.nextInt();
        System.out.print("Enter the marks for CAD:");
        p= in.nextInt();
        System.out.print("Enter the marks for MATHs:");
        c = in.nextInt();
        in.close();
    }
    void average(){
        avg = (o+d+p+c)/4;
    }
    void display(){
        System.out.println("Student name:"+SN);
        System.out.println("regd no:"+regd);
        System.out.println("Course name: CSE");
        System.out.println("marks for ARCH:"+d);
        System.out.println("marks for DEGN:"+o);
        System.out.println("marks for CAD:"+p);
        System.out.println("marks for MATHs:"+c);
        System.out.println("avg marks :"+avg);
    }
}
class temp {
    
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int cn;
        CSE cs = new CSE();
        ECE ec = new ECE();
        CIVIL cl = new CIVIL();
        System.out.println("Enter 1:for CSE , 2:for ECE, 3:for CIVIL");
        cn = in.nextInt();
        switch (cn) {
            case 1:
                cs.input();
                cs.average();
                cs.display();
                break;
            case 2:
                ec.input();
                ec.average();
                ec.display();
                break;
            case 3:
                cl.input();
                cl.average();
                cl.display();
                break;
            
            default:
                System.out.println("Please enter choice between 1-3");
                break;
        }
        in.close();
    }
}