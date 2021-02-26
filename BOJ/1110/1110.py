x= int(input())

i=1

if(x>0 and x<99) or (x==0 or x==99):
    if(x>9):
        fir=x%10
        sec=x//10
        res=int(str(fir)+str((fir+sec)%10))
        

        if(res!=x):
            while(res!=x):
                i+=1
                fir2=res%10
                sec2=res//10
                res=int(str(fir2)+str((fir2+sec2)%10))
        print(i)
    else:
        res=int(str(x)+str(x))
        while(res!=x):
            i+=1
            fir=res%10
            sec=res//10
            res=int(str(fir)+str((fir+sec)%10))
        print(i)
else :
    print("범위 밖의 입력 값")
