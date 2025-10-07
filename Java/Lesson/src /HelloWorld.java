// A simple Java program that demonstrates variables, loops, methods, arrays, and classes.

import java.util.Scanner;

// Main class must match the filename (HelloWorld.java)
public class HelloWorld {

    // A method that adds two numbers
    public static int addNumbers(int a, int b) {
        return a + b;
    }

    // A method that prints all items in an array
    public static void printArray(String[] items) {
        System.out.println("\nYour favorite subjects are:");
        for (String item : items) {
            System.out.println("- " + item);
        }
    }

    // A simple Student class to demonstrate OOP
    static class Student {
        String name;
        int age;
        double gpa;

        Student(String name, int age, double gpa) {
            this.name = name;
            this.age = age;
            this.gpa = gpa;
        }

        void printInfo() {
            System.out.println("\nStudent Info:");
            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
            System.out.println("GPA: " + gpa);
        }
    }

    // Main method — the entry point
    public static void main(String[] args) {

        // Scanner for user input
        Scanner input = new Scanner(System.in);

        System.out.println("=== Welcome to the Java Demo ===");

        // Get user's name
        System.out.print("Enter your name: ");
        String name = input.nextLine();

        // Get user's age
        System.out.print("Enter your age: ");
        int age = input.nextInt();

        // Consume newline after int input
        input.nextLine();

        // Get user's favorite subjects
        System.out.print("Enter your 3 favorite subjects (comma-separated): ");
        String subjectsInput = input.nextLine();
        String[] subjects = subjectsInput.split(",");

        // Show array content
        printArray(subjects);

        // Create a student object
        Student student1 = new Student(name, age, 3.75);
        student1.printInfo();

        // Example of using a method
        int sum = addNumbers(10, 25);
        System.out.println("\nSum of 10 + 25 = " + sum);

        // Loop example
        System.out.println("\nCounting from 1 to 5:");
        for (int i = 1; i <= 5; i++) {
            System.out.println("Count: " + i);
        }

        System.out.println("\nThanks for using the program, " + name + "!");
        input.close();
    }
}