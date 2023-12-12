import re
 
S = input().strip()
 
words = re.findall(r'\b\w+\b', S)
filtered_words = list(filter(None, words))
 
print(len(filtered_words))