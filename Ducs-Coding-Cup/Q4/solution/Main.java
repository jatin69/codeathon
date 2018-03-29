
import java.util.*;

public class Main {
    // Returna total number of palindrome substring of
    // length greater then equal to 2

    static int CountPS(char str[], int n) {
        // creat empty 2-D matrix that counts all palindrome
        // substring. dp[i][j] stores counts of palindromic
        // substrings in st[i..j]
        int dp[][] = new int[n][n];

        // P[i][j] = true if substring str[i..j] is palindrome,
        // else false
        boolean P[][] = new boolean[n][n];

        // palindrome of single lenght
        for (int i = 0; i < n; i++) {
            P[i][i] = true;
        }

        // palindrome of length 2
        for (int i = 0; i < n - 1; i++) {
            if (str[i] == str[i + 1]) {
                P[i][i + 1] = true;
                dp[i][i + 1] = 1;
            }
        }

        // Palindromes of length more then 2. This loop is similar
        // to Matrix Chain Multiplication. We start with a gap of
        // length 2 and fill DP table in a way that gap between
        // starting and ending indexes increases one by one by
        // outer loop.
        for (int gap = 2; gap < n; gap++) {
            // Pick starting point for current gap
            for (int i = 0; i < n - gap; i++) {
                // Set ending point
                int j = gap + i;

                // If current string is palindrome
                if (str[i] == str[j] && P[i + 1][j - 1]) {
                    P[i][j] = true;
                }

                // Add current palindrome substring ( + 1)
                // and rest palinrome substring (dp[i][j-1] + dp[i+1][j])
                // remove common palinrome substrings (- dp[i+1][j-1])
                if (P[i][j] == true) {
                    dp[i][j] = dp[i][j - 1] + dp[i + 1][j] + 1 - dp[i + 1][j - 1];
                } else {
                    dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1];
                }
            }
        }

        // return total palindromic substrings
        return dp[0][n - 1];
    }

    static String embed(String s, int k) {
        char s1[] = s.toCharArray();
        for (int i = 0; i < s1.length; i++) {
            s1[i] = (char) ((( (int)s1[i] - 'A' + k) % 26) + 'A');
        }
        String temp = new String(s1);
        //System.out.println(temp);
        return temp;
    }
    // Driver Method

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        int k1 = sc.nextInt();
        String str2 = sc.next();
        int k2 = sc.nextInt();
        String temp1 = embed(str1, k1);
        String temp2 = embed(str2, k2);
        int m1 = CountPS(temp1.toCharArray(), temp1.length());
        int m2 = CountPS(temp2.toCharArray(), temp2.length());
        //System.out.println(m1);
        //System.out.println(m2);
        System.out.println(m1 * m2);
    }
}
