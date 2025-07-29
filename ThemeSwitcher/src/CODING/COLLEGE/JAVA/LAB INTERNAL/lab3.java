class Staff{
    String name;
    int phone,staffid;
    float salary;
    public Staff(String name,int staffid,float salary,int phone){
        this.name=name;
        this.staffid=staffid;
        this.salary=salary;
        this.phone=phone;
    }
    void display(){
        System.out.printf("\n%s\t%d\t%f\t%d",name,staffid,salary,phone);
    }
}
class Teaching extends Staff{
    String domain,publication;
    public Teaching(String name,int staffid,float salary,int phone,String domain,String publication){
        super(name,staffid,salary,phone);
        this.domain=domain;
        this.publication=publication;
    }
    void display(){
        super.display();
        System.out.printf("\t%s\t%s",domain,publication);
    }
}
class Technical extends Staff{
    String skills;
    public Technical(String name,int staffid,float salary,int phone,String skills){
        super(name,staffid,salary,phone);
        this.skills=skills;
    }
    public void display(){
        super.display();
        System.out.printf("\t%s",skills);
    }
}
class Contract extends Staff{
    int p;
    public Contract(String name,int staffid,float salary,int phone,int p){
        super(name,staffid,salary,phone);
        this.p=p;
    }
    public void display(){
        super.display();
        System.out.printf("\t%d",p);
    }
}
public class lab3{
    public static void main(String[] args) {
        Staff obj[]=new Staff[3];
        obj[0]=new Teaching("SHOBHIT",201,10000.2f,987654,"CSE","iot");
        obj[1]=new Technical("YASH",123,100000.2f,88251,"JAVA");
        obj[2]=new Contract("SHANIDHYA",201,6000.3f,12345,24);
        System.out.println("Name\tStaffid\tSalary\tPhone\tDomain\tPublication\tSkills\tContract");
        for(int i=0;i<3;i++){
            obj[i].display();
        }
    }
}