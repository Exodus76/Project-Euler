#include <stdio.h>
int check_prime(int number);

int main()
{
	unsigned long long int num,i,div,temp;
	int new=1;
	scanf("%llu",&num);
	div = (num/2);
	
	for(i=2;i<=div;i++){
		if(num%i == 0 && check_prime(i)==0){
			temp = i;
			new = new * temp;
			temp = new;
			printf("%d %d\n",temp,i);
			if(temp == num){
				break;
			}
			else{
				continue;
			}
		}
	}
	return 0;
}

int check_prime(int number){
	int flag = 0, i;
	if (number == 2){
		return flag;
	}
	else{
		for(i=2;i<=number/2;i++){
			if(number%i==00){
				flag = 1;
				break;
			}
		}
		return flag;
	}
}

// 13195 5 7 13 29
