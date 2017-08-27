n=int(raw_input());
for i in range(n):
	s=[int(x) for x in raw_input().split(" ")]
	a=s[0];
	b=s[1];
	c=s[2];
	x=s[3];
	if(a+x<0 or b+x<0 or c+x<0):
		print ("NO");

	elif((c+x)**2==(a+x)**2+b**2):
		print ("YES");
	elif((c+x)**2==(a)**2+(b+x)**2):
		print ("YES");
	elif((c)**2==(a+x)**2+(b+x)**2):
		print ("YES");
	elif((a+x)**2==(c+x)**2+b**2):
		print ("YES");
	elif((a+x)**2==(c)**2+(b+x)**2):
		print ("YES");
	elif((a)**2==(c+x)**2+(b+x)**2):
		print ("YES");
	elif((b+x)**2==(c+x)**2+a**2):
		print ("YES");
	elif((b+x)**2==(c)**2+(a+x)**2):
		print ("YES");
	elif((b)**2==(c+x)**2+(a+x)**2):
		print ("YES");
	else:
		print ("NO");