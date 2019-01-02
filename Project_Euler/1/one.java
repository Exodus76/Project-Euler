public class one{
	public static void main(String[] args) {
		int i, count=0,sum=0;
		int[] a = new int[1000];
		for(i=1;i<1000;i++){
			if(i%3==0 || i%5==0){
			    count=count+i;
			}
		}
		System.out.println(sum);	
	}
}