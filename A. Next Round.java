import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int k=scanner.nextInt();
        int count=0;
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i]=scanner.nextInt();
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] < a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for(int j=0;j<k;j++){
            if(a[j]>0){
                count++;
            }
        }
        for (int m = k;m<n;m++){
            if(a[k-1]==a[m]&&a[m]!=0){
                count++;
            }
        }
        System.out.println(count);
    }
}
