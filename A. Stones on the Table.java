import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count=0;
        String s = scanner.next();
        for(int i=0;i<n-1;i++){
            if (s.charAt(i) == s.charAt(i + 1)){
                count++;
            }
        }
        System.out.println(count);
    }
}
