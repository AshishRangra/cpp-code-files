# # import tkinter as tk
# # window tk.Tk()
# # pattern
# ##########
#     #
#     #
#     #
#     # 
# #########
# # for r in range(4):
# #     for c in range(3):
# #         if r==1 and c==0:
# #             print(' ',end='')
# #         elif (r==1 and c==2 )  or (r==2 and c==0):
# #             print(' ',end='')
# #         elif r==2 and c==2:
# #             print('',end=' ')
# #         else:
# #             print("*",end='')
# #     print()

# # ========================================================================================================================
# # tuples
# # ordered,unchnageable,allow duplicate
# # ()
# # students=("ashish","amit","harsh","rohit","ashish")
# # print(students)
# # print(len(students))
# # print(type(students))
# # # b=["ashish"]
# # # print(type(b))
# # y=list(students)
# # print(y)
# # y.append("rangra")
# # students=tuple(y)
# # print(students)




# # 
# # students=("ashish","amit","harsh","rohit","ashish")
# # st=("ankit",'aryan','shivam')
# # students+=st
# # print(students)
# # y=list(students)
# # print(y)
# # # del y
# # # print(y)
# # y.remove("ashish")
# # y.pop(3)
# # print(y)
# # y=tuple(students)
# # print(y)
# # =======================================================================================================================================
# for r in range(5):
#     for c in range(4):
#         if r==0 and c==0 or r==0 and c==3 or r==1 and c==1 or r==1 and c==2 or r==3 and c==1 or r==3 and c==2 or r==4 and c==1 or r==4 and c==2 :
#             print('  ',end='')
#         else:
#            print('#',end=' ')
#     print()
# print('\n')
# for r in range(5):
#     for c in range(5):
#         if r==1 and c==1 or r==1 and c==2 or r==1 and c==3 or r==1 and c==4 or r==3 and c==0 or r==3 and c==1 or r==3 and c==2 or r==3 and c==3:
#             print(' ',end='')
#         else:
#             print("#",end='')
#     print()
# print('\n')
# for r in range(5):
#     for c in range(5):
#         if r==0 and c==1 or  r==0 and c==2  or r==0 and c==3 or r==1 and c==1 or r==1 and c==2 or r==1 and c==3 or r==3 and c==1 or r==3 and c==2 or r==3 and c==3 or r==4 and c==1 or r==4 and c==2 or r==4 and c==3:
#             print(' ',end='')
#         else:
#             print('#',end='')
#     print()
# print('\n')
# for r in range(5):
#     for c in range(5):
#         if r==1 and c==0 or r==1 and c==1 or r==1 and c==3 or r==1 and c==4 or r==2 and c==0 or r==2 and c==1 or r==2 and c==3 or r==2 and c==4 or r==3 and c==0 or r==3 and c==1 or r==3 and c==3 or r==3 and c==4 :
#             print(' ',end='')          

#         else:
#             print("#",end='')
#     print() 

# print('\n')
# for r in range(5):
#     for c in range(5):
#         if r==1 and c==1 or r==1 and c==2 or r==1 and c==3 or r==1 and c==4 or r==3 and c==0 or r==3 and c==1 or r==3 and c==2 or r==3 and c==3:
#             print(' ',end='')
#         else:
#             print("#",end='')
#     print()
# print('\n')
# for r in range(5):
#     for c in range(5):
#         if r==0 and c==1 or  r==0 and c==2  or r==0 and c==3 or r==1 and c==1 or r==1 and c==2 or r==1 and c==3 or r==3 and c==1 or r==3 and c==2 or r==3 and c==3 or r==4 and c==1 or r==4 and c==2 or r==4 and c==3:
#             print(' ',end='')
#         else:
#             print('#',end='')
#     print()
for r in range(5):
    for c in range(30):
        if (r==0) and (c==0 or c==3 or c==4 or c==9 or c==11 or c==12 or c==14 or c==20 or c==25 or c==27 or c==28):
            print(' ',end='')
        elif(r==1) and (c==1 or c==2 or c==4 or c==6 or c==7 or c==8 or c==9 or c==11 or c==12 or c==14 or c==15 or c==16 or c==18 or c==19 or c==20 or c==22 or c==23 or c==24 or c==25 or c==27 or c==28):
             print(' ',end='')
        elif(r==2) and (c==4 or c==9 or c==14 or c==15 or c==16 or c==18 or c==19 or c==20 or c==25):
             print(' ',end='')
        elif(r==3) and (c==1 or c==2 or c==4 or c==5 or c==6 or c==7 or c==9 or c==11 or c==12 or c==14 or c==15 or c==16 or c==18 or c==19 or c==20 or c==21 or c==22 or c==23 or c==25 or c==27 or c==28):
             print(' ',end='')
        elif(r==4) and (c==1 or c==2 or c==4 or c==9 or c==11 or c==12 or c==14 or c==20 or c==25 or c==27 or c==28):
               print(' ',end='')
        else:
            print("#",end='')
    print()
