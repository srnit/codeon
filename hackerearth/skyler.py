t=input();
for i in range(t):
	num = input();
	result=0;
	if(num>9):
		num=5;
	mod=1000000007;
	for val in range((10**(num-1))%mod,(10**(num)%mod)):
		val1 =  int(val)
		#print val1;
	#print (len(str(val)));
		if str(val) == str(val)[::-1]:
			result=(result%mod+val1%mod)%mod;
		#print ("hello");

	print (result%mod);      # print('The given number is PALINDROME')
    