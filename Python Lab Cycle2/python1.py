# -*- coding: utf-8 -*-
"""1_LabCycle2.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1zN_4V49Xm2rjfXTWLXUhAwZsfKL7fGd9

1. Suppose a newly born pair of rabbits, one male and one female, are 
put in a field. Rabbits can mate at the age of one month so that at the 
end of its second month, a female has produced another pair of 
rabbits. Suppose that our rabbits never die and that the female always 
produces one new pair every month from the second month.
Develop a program to show a table containing the number of pairs of 
rabbits in the first N months.
"""

n=int(input("Enter  month, to find the number of pairs of rabbits: "))
month1=0
month2=1
print("  Month      Pairs")
print("____________________")
for i in range(n):
  temp=month2
  month2+=month1
  month1=temp 
  print("  ",i+1,"     |    ",month1)