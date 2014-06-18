import socket
port= 8081
s=socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind(("localhost",port))
print ("waiting on port:" , port)
while True:
    data,addr=s.recvfrom(1024)
    print ("Client:", data,"from" ,addr)
    
