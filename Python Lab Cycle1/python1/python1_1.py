# -*- coding: utf-8 -*-
"""python1.1.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1JDzd3iYhJjFeWbVtffRTXzYJ0fu8-BZO
"""

num = int(input("Enter a four digit number: "))
digit4 = num%10
num = num//10
digit3 = num%10
num = num//10
digit2 = num%10
num = num//10
digit1 = num%10
num = num//10 
sum = digit4+digit3+digit2+digit1
reverse = (digit4*1000)+(digit3*100)+(digit2*10)+digit1
difference = (digit1*digit3)-(digit2*digit4)
print("sum: ",sum)
print("Reverse is : ",reverse)
print("Difference is : ",difference)