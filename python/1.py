x = "-123456"

if x[0] == "-":
    if x[1:len(x):].isdigit() :
        print("0k")
    else:
        print("no")
if x[0] != "-":
    if x[1:len(x):].isdigit() :
        print("ok")
    else:
        print("no")






# print(x[1:len(x):].isdigit())
# print(x[0])
# print(x.isdigit())