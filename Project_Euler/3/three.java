import java.util.Scanner;
import java.lang.Math;
// no = number

class prime{
	int check_prime(long num)
	{
		int flag = 0;
		// System.out.println(num/2);
		for(int i=2;i<=num/2;i++){
			if(num%i==0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			return flag;
			// no is prime
		}
		else{
			return flag;
			// no is not prime
		}
	}

	int get_factors(long num)
	{
		int flag = 0;
		// int i = 2;
		int count =1;
		int[] arr = new int[1000];
		for(int i=2;i<=num/2;i++){
			if(num%i == 0 && check_prime(i) == 0){ //checked if the number is both 
				count = count*i;
				System.out.println(count);
				if(count == num){
					break;
				}
			}
			i++;
		}
		return 0;
	}
		

}

public class three extends prime{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long var = sc.nextLong();
		prime lad = new prime();
		lad.get_factors(var);
	}
}