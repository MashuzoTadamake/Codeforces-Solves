import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        String a = s.substring(0,1).toUpperCase()+s.substring(1);
        System.out.println(a);
    }
}
