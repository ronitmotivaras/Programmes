class Student{
    int roll_no;
    String name;
    int marks;
}
public class arr_of_obj {
    public static void main(String[] args) {

        Student s1 = new Student();
        s1.roll_no=1;
        s1.name = "Ronit";
        s1.marks = 90;

        Student s2 = new Student();
        s2.roll_no=2;
        s2.name = "Roni";
        s2.marks = 95;

        Student s3 = new Student();
        s3.roll_no=3;
        s3.name = "Ron";
        s3.marks = 99;

        Student students[] = new Student[3];
        students[0] = s1;
        students[1] = s2;
        students[2] = s3;

        for(int i=0;i<students.length;i++){
            System.out.println(students[i].name + " = " + students[i].marks);
        }

        System.out.println("\n\n");
        //for each loop

        for(Student stud : students){
            System.out.println(stud.name + " = "+ stud.marks);
        }

    }
}
