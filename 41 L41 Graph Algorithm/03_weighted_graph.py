data = {
    "A" : [ ["B", 10]]
}


data = {}
y = "B"
w = 10
x = "A"
if not x in data:
    element = [[y, w]]
    data[x] = element
if x in data:
    data[x].append([10, 10])
for item in data["A"]:
    print(item)