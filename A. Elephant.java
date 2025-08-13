import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n =scanner.nextInt();
        if(n<=5){
            System.out.println(1);
        }
        else if(n>5 && n%5==0){
            System.out.println(n/5);
        }
        else {
            int sum = (n/5)+1;
            System.out.println(sum);
        }
    }
}
