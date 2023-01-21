
class main {
    public static void main(String[] args) {
        getDetails(8090, "arun", 19, "Kare");
    }

    public static void getDetails(int rollno, String name, int age, String city) {
        System.out.println("***Inputed Student Details***");
        System.out.println("Roll Number:" + rollno + "\nName:" + name + "\nAge:" + age + "\nCity:" + city);
    }
}