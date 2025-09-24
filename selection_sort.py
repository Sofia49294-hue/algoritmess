# Задание 1 --------------------------------------------------------------:

random_array_one = [51, 76, 1, 3, 101, 90, 95, 29, 78, 46]
sort_array_one = []

for i in range(len(random_array_one)):
    maxItem = random_array_one[0]
    maxItemNumber = 0
    for j in range(len(random_array_one)):
        k = random_array_one[j]
        if k < maxItem or k == maxItem:
            maxItem = k
            maxItemNumber = j
    del random_array_one[maxItemNumber]
    sort_array_one.append(maxItem)

print("Задание_1:")
print(sort_array_one)
print()

# Задание 2 --------------------------------------------------------------:

random_array_two = [71, 5, 0, 70, 39, 17, 101, 80, 10, 34]
sort_array_two = []

for i in range(len(random_array_two)):
    maxItem = random_array_two[0]
    maxItemNumber = 0
    for j in range(len(random_array_two)):
        k = random_array_two[j]
        if k > maxItem or k == maxItem:
            maxItem = k
            maxItemNumber = j
    del random_array_two[maxItemNumber]
    sort_array_two.append(maxItem)

print("Задание_2:")
print(sort_array_two)
print()

#Задание3

random_array_three = [
    "26-36-50",
    "60-54-20",
    "02-05-20",
    "18-37-27",
    "19-33-58",
    "48-87-28",
    "65-60-30",
    "97-36-20",
    "30-68-70",
    "96-87-31",
]
sort_array_three = []

for i in range(len(random_array_three)):
    maxItem = random_array_three[0]
    maxItemNumber = 0
    for j in range(len(random_array_three)):
        k = int(random_array_three[j].replace("-", ""))
        if k < int(maxItem.replace("-", "")) or k == int(maxItem.replace("-", "")):
            maxItem = random_array_three[j]
            maxItemNumber = j
    del random_array_three[maxItemNumber]
    sort_array_three.append(maxItem)

print("Задание3:")
print(sort_array_three)
print()

