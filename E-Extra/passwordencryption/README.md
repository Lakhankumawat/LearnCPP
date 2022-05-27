# password encryption

- Password encryption is commonly a code for hidden password from a person .
- It is helpful in banking where we have to hide password from others and also used in many other places.


## Password encryption code
- Its a simple code in which password and username should be checked with predefined password and username ,password will not   shown to us.

### Algorithm

1 It will first take a password
2 Then check whether password is between a to z or A to Z or 0 to 9 if it is between them then it will store in password.
3 if we enter backslash then it will rub char and dereament i by 1
4 IF we press enter ('\r) then it will store "\0" in password
5 Then it will take username and check it with predefined username if it is find true then check password both will be same then you will be logg in.
6 If password will be mismatched then we goes to START(using GOTO strt) again and repeat a process untill count become 3.
7 If count become 3 it will take a char if char will 0 it will exit using (exit(0)) otherwise counter of 6s will run and then same process repeat again

### Properties
- Time Complexity: O(3)       //because it will take password and username 3 times  
- Space Complexity: O(1)
### Advantages

- Password encryption code used mainly in banking system and where we have to hide password from other person 

### Link
[https://www.geeksforgeeks.org/getch-function-in-c-with-examples/)

















