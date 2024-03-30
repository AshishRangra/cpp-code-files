# for r in range(5):
#     for c in range(5):
#         if((r==0 and c==0)or(r==0 and c==4)):
#             print(' ',end=' ')
#         elif((r==1 and c==1)or(r==1 and c==2)):
#             print(' ',end=' ')
#         elif((r==1 and c==3)or(r==3 and c==1)):
#             print(' ',end=' ')
#         elif((r==3 and c==2)or(r==3 and c==3)):
#             print(' ',end=' ')
#         elif((r==4 and c==1)or(r==4 and c==2)):
#             print(' ',end=' ')
#         elif((r==4 and c==3)):
#             print(' ',end=' ')
#         else:
#             print('#',end=' ')
#     print()
# for x in range(5):
#     for y in range(6):

#         print("x",end=' ')
#     print()
# for x in range(0,4):

#     for y in range(0,x+1):
#         print("#",end=' ')
       
#     print()   

for x in range(4,0,-1):
    print("x",end=' ')
    for y in range(3,-1):
        print("x",end=' ')
    print()