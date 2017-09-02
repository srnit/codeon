def fact(num):
	if(num==1):
		return 1;
	elif(num==0):
		return 1;
	else:
		return(num+fact(num-1));
n=int(raw_input());
for i in range(n):
	s=[int(x) for x in raw_input().split(" ")];
	iresult=fact(s[0]);
	#print iresult;
	result=fact(iresult)%(10**s[1]);
	print result;