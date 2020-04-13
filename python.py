# Read Content from File
with open(inputFileName) as f:
		content = f.readlines()
	content = [x.strip() for x in content]
# Case Sensitive Comparision
name1.casefold() in author_name[i].casefold()
