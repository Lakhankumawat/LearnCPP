numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]  #this list for all available numbers to players
player1 = []                           #this list for numbers that player one will take 
player2 = []                           #this list for numbers that player two will take 

# this function takes numbers from exist numbers  and check if the player can take this number or not 
# this function takes two parameters (number of player and the list of the numbers he has taken)
def listinput(list , num ) :
    x=int(input(f"player {num} , type number >> "))
    test=True
    while test :
        if x in numbers :
            list.append(x)
            numbers.remove(x)
            test=False
            
        else :
            x=int(input("type another number in list and  shouldnt be chosen before >>"))

print("you have a list of numbers from 1 to 9 ")     
for i in range ( 1,3 ) :                     #make loop to make each player take first and second number to his list using function listinput
    listinput(player1 , 1)
    print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")
    
    listinput(player2 , 2)    
    print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")

listinput(player1 , 1)                       #make make player one take his third number and check if he will win                          
print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")

sum1=player1[0]+player1[1]+player1[2]
if sum1==15 :
    print("player1 won")
else:
    listinput(player2 , 2)                   #make make player two take his third number and check if he will win 
    print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")
    sum2=player2[0]+player2[1]+player2[2]
    if sum2 ==15 :
        print("player2 won")
    else :
        listinput(player1 , 1)               #make make player one take his fourth number and check if he will win 
        print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")
    
        #using statistics , i will sum number without repetition because Addition is a commutative process
        #and to find number of probability we will use rule : >>  n!/(k!(n-k)!) while n is numbers of all number and k is number of numbers we will took 
        sum1=player1[0]+player1[1]+player1[2]
        sum2=player1[0]+player1[1]+player1[3]
        sum3=player1[0]+player1[2]+player1[3]
        sum4=player1[1]+player1[2]+player1[3]
        if sum1==15 or sum2==15 or sum3==15 or sum4==15 :
            print("player1 won")
        else :
            listinput(player2 , 2)           ##make make player two take his fourth number and check if he will win 
            print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")
            
            #using statistics , i will sum number without repetition because Addition is a commutative process
            #and to find number of probability we will use rule : >>  n!/(k!(n-k)!) while n is numbers of all number and k is number of numbers we will took
            sum1=player2[0]+player2[1]+player2[2]
            sum2=player2[0]+player2[1]+player2[3]
            sum3=player2[0]+player2[2]+player2[3]
            sum4=player2[1]+player2[2]+player2[3]
            if sum1==15 or sum2==15 or sum3==15 or sum4==15 :
                print("player2 won")
            else :
                listinput(player1 ,1)         #finally make player one take last nubmer if player two did not win in the last turn
                print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")
                
                #using statistics , i will sum number without repetition because Addition is a commutative process
                #and to find number of probability we will use rule : >>  n!/(k!(n-k)!) while n is numbers of all number and k is number of numbers we will took
                sum1=player1[0]+player1[1]+player1[2]
                sum2=player1[0]+player1[1]+player1[3]
                sum3=player1[0]+player1[1]+player1[4]
                sum4=player1[0]+player1[2]+player1[3]
                sum5=player1[0]+player1[2]+player1[4]
                sum6=player1[0]+player1[3]+player1[4]
                sum7=player1[1]+player1[2]+player1[3]
                sum8=player1[1]+player1[2]+player1[4]
                sum9=player1[1]+player1[3]+player1[4]
                sum10=player1[2]+player1[3]+player1[4]
                if sum1==15 or sum2==15 or sum3==15 or sum4==15 or sum5==15 or sum6==15 or sum7==15 or sum8==15 or sum9==15 or sum10==15 :
                    print("player1 won")
                else :
                    print(f"numbers of player1 is : {player1}  , numbers of player2 is {player2}, remaining numbers is {numbers}")
                    print("the game is a draw")                       
