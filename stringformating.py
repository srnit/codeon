n=int(raw_input());
space=len(bin(n))-2;
#print(bin(n)[2:],space-2);
for i in range(0,n):
	print('{0:{space}d} {0:{space}o} {0:{space}X} {0:{space}b}'.format(i+1,space=space));
