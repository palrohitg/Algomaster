def canBecomeEmpty(string, sub_str):
	while len(string) > 0 :
		idx = string.find(sub_str)
		if (idx == -1):
			break
		string = string.replace(sub_str, "", 1)
	return (len(string) == 0)

print(canBecomeEmpty("geekgeeeks", "geeks"))