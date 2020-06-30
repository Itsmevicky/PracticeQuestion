#naive ackermann function

def ackermann(m,n):
    global calls
    calls += 1
    if m==0:
        return n + 1
    elif n==0:
        return ackermann(m-1,1)
    else:
        return ackermann(m-1,ackermann(m,n-1))

ackermann(3,4)
