import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        String[] c = s.split("\\+");
        int[] arr = new int[c.length];
        for(int i=0;i<c.length;i++){
            arr[i]=Integer.parseInt(String.valueOf(c[i]));
            }
        for (int j = 0; j < arr.length - 1; j++) {
            for (int k = 0; k < arr.length - j - 1; k++) {
                if (arr[k] > arr[k + 1]) {
                    int temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
        for(int m=0;m< arr.length;m++){
            System.out.print(arr[m]);
            if(m!=arr.length-1){
                System.out.print("+");
            }
        }
    }
}
