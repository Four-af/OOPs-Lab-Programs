import java.util.Scanner;

abstract class Shape {

  int a, b;

  abstract void printArea();
}

class Rectangle extends Shape {

  void printArea() {
    System.out.println("\nArea of Rectangle: " + (a * b));
  }
}

class Triangle extends Shape {

  void printArea() {
    System.out.println("\nArea of Triangle: " + (0.5 * a * b));
  }
}

class Circle extends Shape {

  void printArea() {
    System.out.println("\nArea of Circle: " + (3.14 * a * a));
  }
}

public class P9_abstract_class {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Rectangle r = new Rectangle();
    Triangle t = new Triangle();
    Circle c = new Circle();

    System.out.println("\nEnter the length and breadth of rectangle: ");
    r.a = sc.nextInt();
    r.b = sc.nextInt();
    System.out.println("\nEnter the base and height of triangle: ");
    t.a = sc.nextInt();
    t.b = sc.nextInt();
    System.out.println("\nEnter the radius of circle: ");
    c.a = sc.nextInt();
    r.printArea();
    t.printArea();
    c.printArea();
    sc.close();
  }
}
