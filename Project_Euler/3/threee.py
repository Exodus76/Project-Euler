from functools import reduce
import math
import time

def check_prime(num):
	flag = 0
	for i in xrange(2,num/2):
		if (num%i==0):
			flag = 1
			break
	return flag

def get_factors(num):
	a = []
	for i in xrange(2,num/2):
		if (num%i ==0 and check_prime(i) == 0):
			a.append(i)
	print(a)
	return 0

#var = int(input("daal number "))
var = 600851475143L
start = time.time()
get_factors(var)
end = time.time()
print(end-start)
