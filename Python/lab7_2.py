
import random

def ip_str(byte):
  return (str(byte[0])+"."+str(byte[1])+"."+str(byte[2])+"."+str(byte[3]))

ip_base = [
    [192, 168, 100, 104],
    [192, 168, 100, 102],
    [192, 168, 100, 104],
    [10, 0, 0, 1],
    [10, 0, 0, 2],
    [10, 0, 1, 1],
    [172, 16, 0, 1],
    [172, 16, 1, 1],
    [172, 16, 2, 1],
    [172, 16, 3, 1],
    [203, 0, 113, 1],
    [203, 0, 113, 2],
    [198, 51, 100, 1],
    [198, 51, 100, 2],
    [8, 8, 8, 8],
    [8, 8, 4, 4],
    [1, 1, 1, 1],
    [9, 9, 9, 9],
    [192, 0, 2, 1],
    [192, 0, 2, 2],
    [192, 88, 99, 1],
    [185, 199, 108, 153],
    [185, 199, 108, 154],
    [104, 26, 10, 78],
    [104, 26, 11, 78] 
]

request_base = ["GET","POST","PUT","DELETE","UPDATE"]
status_base = [100,101,102,200,300,401,403,404,500]

date = "2020-01-01"

def data_line(ip,date, request, status ):
    return ip_str(ip) +" -- ["+date+'] "'+request+'" '+str(status)+"\n"


def file_write_line(filename,lines):
    file = open(filename+".txt",'w')
    for line in lines:
      file.writelines(line)
     
def get_file(filename):
    file = open(filename+".txt",'r')
    
    dict = {404:0, 200:0, 500:0}
    ip_dict = {}
   
    for line in file:
        data = list(line.split())
        if (int(data[4]) == 404 or int(data[4]) == 200 or int(data[4]) == 500):
            dict[int(data[4])] += 1
        if data[0] in ip_dict:
            ip_dict[data[0]] += 1
        else:
            ip_dict[data[0]] = 1

    ip = '0'
    max_val = 0
    ips = []
    for i in range(3):
        for key, value in ip_dict.items():
            if value > max_val:
                ip = key
                max_val = value
        ip_dict[ip] = 0
        ips.append(ip)
        ip = '0'
        max_val = 0
        
    print(ips)    
    print(ip_dict)
    print(dict)

filename = "lab7_2"
if __name__ == "__main__":
    lines = []
    for i in range(100):
        lines.append(data_line(ip_base[random.randrange(0,len(ip_base))], date, request_base[random.randrange(0,len(request_base))],status_base[random.randrange(0,len(status_base))]))
    file_write_line(filename,lines)
    get_file(filename)
