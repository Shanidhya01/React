interface Resume {
    void biodata();
}
class Teacher implements Resume {
    String name, qualification, achievement;
    float experience;
    public void biodata() {
        name = "Shashank K";
        qualification = "M Tech";
        achievement = "Q1 Publication";
        experience = 14.8f;
        System.out.println("Teacher Resume:");
        System.out.println("NAME: " + name);
        System.out.println("QUALIFICATION: " + qualification);
        System.out.println("ACHIEVEMENT: " + achievement);
        System.out.println("EXPERIENCE: " + experience + " years");
    }
}
class Student implements Resume {
    String name, discipline;
    float result;
    public void biodata() {
        name = "Shanidhya Kumar";
        result = 9.8f;
        discipline = "Computer Science and Engineering";
        System.out.println("\nStudent Resume:");
        System.out.println("NAME: " + name);
        System.out.println("RESULT: " + result + " CGPA");
        System.out.println("DISCIPLINE: " + discipline);
    }
}
public class InterfaceP {
    public static void main(String[] args) {
        Teacher obj1 = new Teacher();
        obj1.biodata();
        Student obj2 = new Student();
        obj2.biodata();
    }
}