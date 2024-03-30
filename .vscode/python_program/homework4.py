# for rows in range(5):
#     for a in range(23):
#         if (rows==0) and (a==0 or a==4 or a==5 or a==7 or a==8 or a==9 or a==11 or a==17):
#             print(" ",end=" ")
#         elif(rows==1) and (a==1 or a==2 or a==3 or a==5 or a==8 or a==11 or a==12 or a==13 or a==15 or a==16 or a==17 or a==18 or a==19 or a==21 or a==22):
#             print(" ",end=" ")
#         elif(rows==2) and (a==5 or a==7 or a==9 or a==11 or a==12 or a==13 or a==15 or a==16 or a==17 or a==18 or a==19 or a==21 or a==22):
#             print(" ",end=" ")
#         elif(rows==3) and (a==1 or a==2 or a==3 or a==5 or a==7 or a==8 or a==9 or a==11 or a==12 or a==13 or a==15 or a==16 or a==17 or a==18 or a==19 or a==21 or a==22):
#             print(" ",end=" ")
#         elif(rows==4) and (a==1 or a==2 or a==3 or a==5 or a==7 or a==8 or a==9 or a==11 or a==17 or a==18 or a==19 or a==21 or a==22):
#             print(" ",end=" ")
#         else:
#             print("@",end=" ")
#     print()

#using lot of for loops
for rows in range(5):
    for a in range(23):
        if (rows==0) and (a==0 or a==4 or a==5 or a in range (7,10) or a==11 or a==17):
            print(" ",end=" ")
        elif(rows==1) and (a in range (1,4) or a in range (11,14) or a in range (15,20) or a==5 or a==8  or a==15 or a==21 or a==22):
            print(" ",end=" ")
        elif(rows==2) and (a==5 or a==7 or a==9 or a in range(11,14) or a in range (15,20) or a==21 or a==22):
            print(" ",end=" ")
        elif(rows==3) and (a in range(1,4) or a==5 or a in range (7,10) or a in range (11,14) or a in range(15,20) or a==21 or a==22):
            print(" ",end=" ")
        elif(rows==4) and (a in range(1,4) or a==5 or a in range(7,10) or a==11 or a in range(17,20) or a==21 or a==22):
            print(" ",end=" ")
        else:
            print("@",end=" ")
    print()

#using more and more for loop using itertools(a concept of advanced python)
# import itertools
# for rows in range(5):
#     for a in range(23):
#         if (rows==0) and (a==0 or a==4 or a==5 or a in range(7,10) or a==11 or a==17):
#             print(" ",end=" ")
#         elif(rows==1) and (a in itertools.chain(range(1,4),range(11,14),range(15,20)) or a==5 or a==8  or a==15 or a==21 or a==22):
#             print(" ",end=" ")
#         elif(rows==2) and (a==5 or a==7 or a==9 or a in itertools.chain(range(11,14),range (15,20)) or a==21 or a==22):
#             print(" ",end=" ")
#         elif(rows==3) and (a in itertools.chain(range(1,4),range(7,10),range(11,14),range(15,20)) or a==5 or a==21 or a==22):
#             print(" ",end=" ")
#         elif(rows==4) and (a in itertools.chain(range(1,4),range(7,10),range(17,20)) or a==5 or a== 11 or a==21 or a==22):
#             print(" ",end=" ")
#         else:
#             print("@",end=" ")
#     print()