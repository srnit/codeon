n=int(raw_input());
for i in range(n):
	str1=raw_input();
	str2=raw_input();
	check=0;
	if(len(str1)>=len(str2)):
		for i in range(len(str2)):
			if(str1[i] in str2):
				print "YES";
				check=1;
	if(len(str2)>=len(str1)):
		for i in range(len(str2)):
			if(str1[i] in str2):
				print "YES";
				check=1;
		if(check==0):
			print "NO";




