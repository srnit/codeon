import socket 
 
host ='172.16.16.2'
port = 2004
BUFFER_SIZE = 2000 
MESSAGE = raw_input("tcpClientB: Enter message/ Enter exit:")
 
tcpClientB = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
tcpClientB.connect((host, port))
 
while MESSAGE != 'exit':
    tcpClientB.send(MESSAGE)     
    data = tcpClientB.recv(BUFFER_SIZE)
    print " Client received data:", data
    MESSAGE = raw_input("tcpClientB: Enter message to continue/ Enter exit:")
 
tcpClientB.close() 