#python is a strongly and dynamically typed language

def foo(i):
    if i > 0:
        print(i+1)
    else:
        print("The parameter is: " + i)

def mymain():
  # foo(-5)    #error
    foo(5)
mymain()



