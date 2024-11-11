class Event:
    def __init__(self, data):
        self.__data = data
    def details(self):
        return self.__data

class Meeting(Event):
    def __init__(self, data, memberList):
        super().__init__(data)
        self.__memberList = list(memberList)
    def get_member_List(self):
        return(self.__memberList)

class Appointment(Event):
    def __init__(self, data, time):
        super().__init__(data)
        self.__time = time
        
    def get_member_List(self):
        return(self.__time)



X1=Event("asd1")


X2=Meeting("asd2",[0,1,2])

X3=Appointment("asd3","20/12/24")


print(X1.details())

print(X2.details(),end=" ")
print(X2.get_member_List())

print(X3.details(),end=" ")
print(X3.get_member_List())
