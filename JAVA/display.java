import java.util.*;
class CSE{
    String sub,regd_no,name,course_name;
    double DSA,JAVA,PPS,PY,avg;
    void input(){
        Scanner in= new Scanner(System.in);
        System.out.println("Enter the name of the student");
        name=in.nextLine();
        System.out.println("Enter the regd no");
        regd_no=in.nextLine();
        //System.err.println("Enter the subject");
        //sub=in.nextLine();
        System.out.println("Enter the marks of the DSA");
        DSA=in.nextDouble();
        System.out.println("Enter the marks of JAVA");
        JAVA=in.nextDouble();
        System.out.println("Enter the marks of PPS");
        PPS=in.nextDouble();
        System.out.println("Enter the marks of Python");
        PY=in.nextDouble();
        in.close();
    }    
    void calculate(){
        avg=(DSA+JAVA+PPS+PY)/4;
    }
    void display()
    {
        System.out.println("The reg no="+regd_no);
        System.out.println("Name of the student is="+name);
        System.out.println("The course is CSE");
        System.out.println("Marks in DSA="+DSA);
        System.out.println("Marks in JAVA="+JAVA);
        System.out.println("Marks in PPS="+PPS);
        System.out.println("Marks in Python="+PY);
        System.out.println("The avg is="+avg);
    }
}
class ECE{
    String sub,regd_no,name,course_name;
    double CESS,EE,BEE,DBMS,avg;
    void input(){
        Scanner in= new Scanner(System.in);
        System.out.println("Enter the name of the student");
        name=in.nextLine();
        System.out.println("Enter the regd no");
        regd_no=in.nextLine();
        //System.err.println("Enter the subject");
        //sub=in.nextLine();
        System.out.println("Enter the marks of the CESS");
        CESS=in.nextDouble();
        System.out.println("Enter the marks of EE");
        EE=in.nextDouble();
        System.out.println("Enter the marks of BEE");
        BEE=in.nextDouble();
        System.out.println("Enter the marks of DBMS");
        DBMS=in.nextDouble();
        in.close();
    } 
    void calculate(){
        avg=(CESS+EE+BEE+DBMS)/4;
    }
    void display(){
        System.out.println("The reg no= "+regd_no);
        System.out.println("Name of the student is= "+name);
        System.out.println("The course is CSE");
        System.out.println("Marks in CESS= "+CESS);
        System.out.println("Marks in EE="+EE);
        System.out.println("Marks in BEE= "+BEE);
        System.out.println("Marks in DBMS= "+DBMS);
        System.out.println("The avg mark= "+avg);
    }
}   
public class display {
    public static void main(String[] args) {
        CSE ob=new CSE();
        ECE ob1=new ECE();
        Scanner in=new Scanner(System.in);
        System.out.println("Enter 1 for CSE\n2 for ECE");
        int a=in.nextInt();
        in.close();
        switch (a) {
            case 1:
                ob.input();
                ob.calculate();
                ob.display();
                break;
            case 2:
            ob1.input();
            ob1.calculate();
            ob1.display();
            break;
            default:
            System.out.println("Enter properly");
        }
    }
}