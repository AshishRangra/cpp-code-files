 # dictonary
# a={
#     'phone':'poco x2',
#     'laptop':'acer',
#     'year':2020,
#     'year':2022

# }
# print(a)
# print(len(a))
# print(type(a))
# y=list(a)
# print(y)
# z=tuple(a)
# print(z)
# z=dict(a)
# print(z)
# a.update({"color":"green"})
# print(a)
# y.remove("year")
# print(y)
# x=a.values()
# print(x)
# print(a.values())
# x=a["year"]=2024
# print(x)
# # del (a)
# # print(a)
# a.pop("phone") ##in dictonry we need to give arguments to pop function but in list there is no need to give arguments
# print(a)
# a.popitem()
# print(a)
# print(y[0])# indexing method is only used in list 
# # a.clear()
# # print(a)
# # del a["laptop"]
# # print(a)
# # ra=str(input())
# # a.pop(ra)
# # print(a)
# # student={}
# # for i in range(2):
# #    name=input("enter name")
# #    roll_no=int(input("enter roll_non"))
# #    student[name] =[roll_no]
# # h=input()
# # g=list(student)
# # g.remove(h)
# # print(g)
# # g=dict(g)
# # print(g)
# for i in a :
#   print("display",a)

i={"technology":"|python","Batch":"morning"}
i.update({"timing":"9am"})
print(i)
j={"student":"ashish","roll_no":234}
print(dict(i,**j))

names={4:"ashish",3:"ashutosh",5:"amit",1:"Rangra"}
print(sorted(names.keys()))
z=sorted(names.values())
print(z)
# print(dict(reversed(list(sorted(names.items())))))
x=sorted(names.items(),reverse=True)
print(x)