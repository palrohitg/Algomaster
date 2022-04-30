input_string = "geek;geeks;geeks;"
# split_list = input_string.split(";")

# for substring in split_list:
#     if (len(substring) > 0):
#         print(substring) 

i = j = 0
n = len(input_string)

while i < n and j < n:
    if(input_string[j] != ';'):
        j += 1
    else:
        print(input_string[i:j])
        j += 1
        i = j

# O(N) solution with two pointer approach Easy 
