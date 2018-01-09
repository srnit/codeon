import math;
n=int(raw_input());
m=int (raw_input());
if(n>m):
	print m;
else:
	x=2**n;
	if(m<x):
		print m;
	else:
		print (m%(x));