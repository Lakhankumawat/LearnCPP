# program name : anagram
# author : salma amir
# contact : salmaameer409@gmail.com
# description : check for anagram words
# last modifation : 25-3-2022



# the idea is to take the two words  and sort them
# if they are matching it is anagram and print Yes
# and if not it is not anagram and print NO
print ("              ... welcome to anagram checker ")
print (" ...This program is to check if two words are anagram or not...\n   ...All you have to do is enter the two words you want to check...")
fisrt_word = input("please enter the first word :")
scond_word = input("please enter the second word :")

 # use built in function "sorted" to sort the two words

if sorted(fisrt_word)== sorted(scond_word):
    print ("Yes")
else:
    print ("No")
