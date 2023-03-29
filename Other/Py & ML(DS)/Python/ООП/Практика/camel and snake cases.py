# cловоСловоСловоСлово —-> слово_слово_слово_слово

camel = 'timeToLife'  # 'case_case_word_case_string'
str_1 = []
str_2 = []
final = ""

for i in camel:
    str_1.append(i)
for i in camel:
    str_2.append(i.upper())

for i in range(len(camel)):
    if str_1[i] == str_2[i]:
        final += '_'
    final += str_1[i]

print(str_1)
print(str_2)
print(final.lower())
# i == i.upper
str_3 = str_1
str_3.extend(str_2)
print(str_3)
str_3.pop()
print(str_3)












































