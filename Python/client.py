import socket
port = 8081
host = "localhost"
while True:
    msg=input("Say something to server")
    msg=bytes(msg,("UTF-8"))   #cannot send data directly thats why convert to byte
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.sendto(msg, (host, port))
    
    
