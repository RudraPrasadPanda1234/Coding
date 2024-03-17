#5.WAP to read two sets from the keyboard and perform all the set operations
set1 = eval(input("Enter elements for set 1 (comma-separated): "))
set2 = eval(input("Enter elements for set 2 (comma-separated): "))
#all set operations performed
union = set1 | set2
intersection = set1 & set2
difference1 = set1 - set2
difference2 = set2 - set1
symmetric_difference = set1 ^ set2
#print result in f string 
print(f"""
  Set 1: {set1}
  Set 2: {set2}
  Union: {union}
  Intersection: {intersection}
  Difference (Set 1 - Set 2): {difference1}
  Difference (Set 2 - Set 1): {difference2}
  Symmetric Difference: {symmetric_difference}
  """)