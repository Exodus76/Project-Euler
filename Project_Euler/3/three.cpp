#include <iostream>
using namespace std;

int check_prime(long num);
int get_factors(long num);

int main() {
	long var;
	cin >> var;
	get_factors(var);
}

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
	int i = 2;
	while(i<=num/2){
		if(num%i == 0 && check_prime(i) == 0){ //checked if the number is both 
			cout<<i<<"this";
		}
		i++;
	}
	return 0;
}