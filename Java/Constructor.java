class Human {
    private int age;
    private String name;
    
    public Human(){
        age = 21;
        name = "R";
    }

    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
}

public class Constructor {
    public static void main(String[] args) throws ClassNotFoundException {
        Human h1 = new Human();
        System.out.println(h1.getName() + " : " + h1.getAge());
        
        h1.setAge(30);
        h1.setName("Ronit");

        System.out.println(h1.getName() + " : " + h1.getAge());
    }
}
