import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s1 = scanner.next();
        String s2 = scanner.next();
        String a = s1.toLowerCase();
        String b = s2.toLowerCase();
        int s = a.compareTo(b);
        if(s>0){
            System.out.println(1);
        } else if (s<0) {
            System.out.println(-1);
        }else {
            System.out.println(0);
        }
    }
}
