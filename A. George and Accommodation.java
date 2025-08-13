import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n =scanner.nextInt();
        int p,q;
        int count = 0;
        for(int i = 0;i<n;i++){
            p=scanner.nextInt();
            q=scanner.nextInt();
            if(q-p>=2){
                count++;
            }
        }
        System.out.println(count);
    }
}
