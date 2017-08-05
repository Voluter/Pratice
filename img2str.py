#将图片转换成字符表示出来
import matplotlib.pyplot as plt
import matplotlib.image as mping
import numpy as np

lena=mping.imread('E:\hello.png')

arr=[[i for i in range(len(lena[j]))] for j in range(len(lena))]

        
for i in range(1,len(lena)//10):
    for j in range(1,len(lena[0])//10):
        arr[i][j]=sum(sum(sum(lena[(i-1)*10:i*10,(j-1)*10:j*10])))/3
        if arr[i][j]<120:
            arr[i][j]=" "
        else:
            arr[i][j]="#"

for i in range(1,len(lena)//10):
    for j in range(1,len(lena[0])//10):
        print(arr[i][j],end='')
    print()

