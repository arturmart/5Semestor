class Book:
    def __init__ (self, data):
        self.__data = data

    def get_info(self):
        return self.__data
    
    
class EBook(Book):
     def __init__(self, data,form):
        super().__init__(data)
        self.__form = form
     def get_format(self):
        return self.__form

class PrintedBook(Book):
     def __init__(self, data,pages):
        super().__init__(data)
        self.__pages = int(pages)
        
     def get_pages(self):
        return self.__pages


X1=Book("asd1")

X2=EBook("asd2",".rar")

X3=PrintedBook("asd3",64)


print(X1.get_info())

print(X2.get_info(),end=" ")
print(X2.get_format())

print(X3.get_info(),end=" ")
print(X3.get_pages())
