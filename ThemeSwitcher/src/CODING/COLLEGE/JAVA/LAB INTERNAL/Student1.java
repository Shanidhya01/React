import java.util.Scanner;
class Student1{
    String name, branch, usn;
    long phone;
    void read(int m) {
        Scanner input = new Scanner(System.in);
        System.out.printf("\nEnter details of Student %d:\n", m+1);
        System.out.printf("Enter Name: ");
        name = input.next();
        System.out.printf("Enter Branch: ");
        branch = input.next();
        System.out.printf("Enter USN: ");
        usn = input.next();
        System.out.printf("Enter Phone Number: ");
        phone = input.nextLong();
    }
    void display(int m) {
        System.out.printf("\nStudent %d Details:\n", m + 1);
        System.out.printf("Name: %s\nBranch: %s\nUSN: %s\nPhone: %d\n", name, branch, usn, phone);
    }
    public static void main(String args[]) {
        Student1[] s1 = new Student1[100];
        System.out.print("Enter the number of student: ");
        Scanner n = new Scanner(System.in);
        int num = n.nextInt();
        for (int i = 0; i < num; i++) {
            s1[i] = new Student1();
            s1[i].read(i);
        }
        for (int i = 0; i <num; i++) {
            s1[i].display(i);
        }
    }
}
