x=int (input())
y=int (input())

if (x==1000 or y==1000) or (x>=1000 and x<1000 and y>-1000 and y<1000):
    if x>0 and y>0:
        print("1")
    elif x>0 and y<0:
        print("2")
    elif x<0 and y<0:
        print("3")
    elif x>0 and y<0:
        print("4")
    else :
        print("x 또는 y는 0")
else :
    print("범위 밖 입력 값")
