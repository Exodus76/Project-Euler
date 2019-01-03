from functools import reduce
def check_prime(num):
	if (num == 2):
		flag = 0
	flag = 0
	for i in range(2,int(num/2)):
		if (num%i==0):
			flag = 1
			break
	return flag

def get_factors(num):
	a = []
	for i in range(2,int(num/2)):
		if (num%i ==0 and check_prime(i) == 0):
			a.append(i)
			new_a = reduce(lambda x, y: x*y,a)
			if new_a == num:
				break
			else:
				continue
	print('\nThe largest prime factor is',max(a))
	return 0

var = int(input("Insert number "))
get_factors(var)
