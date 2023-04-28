with open("file1.txt" ,"w") as file:
	for i in range(10000000):
		file.write("Useless file")
	file.write("\n")
