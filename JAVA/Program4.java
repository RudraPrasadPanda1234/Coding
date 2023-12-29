//wap to create a class called shape with methods called getPerimeter() and Getarea(). Create a subclass circle that overrides the getperemeter() and getarea() methods to calculate the area and parameter of a circle.
import java.util.Scanner;
class Shape {
    double getPerimeter() {return 0.0;}
    double getArea() {return 0.0;}
}
class Circle extends Shape {
    double getPerimeter(double r) {
        return 2*3.141*r;
    }
    double getArea(double r) {
        return r*r*3.141;
    }
}
class Program4 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        Circle c=new Circle();
        double r=in.nextDouble();
        System.out.println("Perimeter: "+c.getPerimeter(r));
        System.out.println("Area: "+c.getArea(r));
        in.close();
    }
}