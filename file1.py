f=open("test.dat","w");
print f;
f.write("hello i am sudhanshu raman");
f.close();
fr=open("test.dat","r");
print fr.read();
fr.close();
