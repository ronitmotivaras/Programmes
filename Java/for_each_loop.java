public class for_each_loop {
    public static void main(String[] args) {

        int nums[] = new int[3];
        nums[0]=1;
        nums[1]=2;
        nums[2]=3;

        for( int n : nums){
            System.out.println(n);
        }
    }
}
