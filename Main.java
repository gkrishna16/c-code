public class Main {
    public static void ArmStrongNumber(int n)
    {
        int count = 0;
        int originalNo = n;
        int temp = n;
    
        while (temp != 0)
        {
            count++;
            temp = temp / 10;
        }
        int sumOfPower = 0;

        while (n != 0)
        {
            int lastDigit = n % 10;
            sumOfPower = sumOfPower + (int) Math.pow(lastDigit, count);
            n /= 10;
        }
        System.out.println((sumOfPower == originalNo));

    };

    public static void printDivisorsBruteForce(int n)
    {
        for (int i = 1; i <= (int)Math.sqrt(n); i++) 
        {
        if (n % i == 0)
        {
            System.out.println(i);
            if (i != n/i) System.out.println(n/i + " ");
        }    
        }
    };

    public static void main(String[] args) {
        printDivisorsBruteForce(36);
    }
}