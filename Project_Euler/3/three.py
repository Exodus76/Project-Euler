from functools import reduce
def check_prime(num):
	flag = 0
	for i in range(2,int(num/2)):
		if (num%i==0):
			flag = 1
			break
	if (flag == 0):
		return flag
		# no is prime
	else:
		return flag
		# no is not prime

def multi(list):
	for e in list:
		product = product * e


def get_factors(num):
	a = []
	for i in range(2,int(num/2)):
		if (num%i ==0 and check_prime(i) == 0):
			a.append(i)
			print(a)
			new_a = reduce(lambda x, y: x*y,a)
			print(new_a)
			if new_a == num:
				break
			else:
				continue
	print(a)
	return 0

var = int(input("daal number "))
get_factors(var)
