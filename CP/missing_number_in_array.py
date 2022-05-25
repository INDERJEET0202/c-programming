array = [6,8,3,4,7,10]
n = 10

# # print(sum(array))
# arraySum = sum(array)
# # print(arraySum)
# sum = 0
# for i in range(n+1):
#     sum += i
# # print(sum)
# res = sum - arraySum
# print(res)

array.sort()
# res = 0
# for i in range(n+1):
#     if(i != (array[i]-1)):
#         res = i
#         break
# print(res+1)


data = [-1] * n
for i in range(len(array)):
    data[array[i]-1] = array[i] 
    if(data[i] == -1):
        print(i+1)

print(data)