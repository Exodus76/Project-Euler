import java.util.Scanner;

public class two{
	public static void main(String[] args) {
	long i,cout,t1 = 0, t2 = 1,even=0;
	long var = 4000000;
	for(i=0;i<var;i++){
		cout = t1 + t2; //1 2
		t1 = t2;
		t2 = cout;
		if (cout>var){
			break;
		}
		else if(cout%2 == 0){
			even = even + cout;
		}
	}
	System.out.println(even);
}
}