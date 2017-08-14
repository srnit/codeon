
n=int(raw_input());
for i in range(n):
	str=[x for x in raw_input().split(" ") ];
	#print (len(str));
	num=int(len(str))/2
	for i in range(num):
		temp=str[i];
		str[i]=str[(len(str)-1)-i];
		str[(len(str)-1)-i]=temp;

	print (" ".join(str));	
