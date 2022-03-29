# In this game, 10 characters are chosen. Each character is repeated twice.The characters are put in random order.
# Each player picks two numbers between 1 and 20. The two characters in these positions are shown and the rest are covered with their position number.
# If the two characters match, the player wins a point and these two characters are covered with * from now on.
# The screen is cleared and the remaining character positions are displayed for the next player.
# When all characters are covered with *score wins., the game ends and the player with the biggest 

from tkinter import *
from tkinter import messagebox
root = Tk()

#the dimention of the photo and title
root.geometry("500x250")
root.title("one line game ")

#making background image to the game 
background=PhotoImage(file=r"C:\Users\ME\Downloads\phototogame.png")
l=Label(root,image=background)
l.place(x=0,y=0,relwidth=1,relheight=1)

chars = ["A","B", "C", "D", "E", "F", "G", "H", "I", "J", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"]
global player1_point ;
player1_point =0

global player2_point ;
player2_point=0

#----------------------------------------------------------------------------------------------------------------------------------------------------------
#this two functions to player1  to check if two character are simllar or not and show user what he have choose
def getnum1():
    global num1;
    num1=int(player1_entry1.get())-1
    
def getnum2():
    global  num2;
    num2=int(player1_entry2.get())-1
   
    if chars.count("*") != 20:
        
        if chars[num1]==chars[num2] and  chars[num1]!="*"  :
            
            global player1_point ;
            player1_point+=1
            messagebox.showinfo(title="message",message=f"congratulation you got a point , you choosed {chars[num1]} twice, you have {player1_point} point  ")
            chars[num1]="*"
            chars[num2]="*"
            player1_entry1.delete(0,END)
            player1_entry2.delete(0,END)
           
        elif num1 >20 or num2>20 :
            messagebox.showinfo(title="message",message="try to type number from 1 to 20")
            player1_entry1.delete(0,END)
            player1_entry2.delete(0,END)
           
        else :
            messagebox.showinfo(title="message",message=f"you choosed {chars[num1]} and {chars[num2]} try to type another two numbers")
            player1_entry1.delete(0,END)
            player1_entry2.delete(0,END)
       
    else:

        if player1_point>player2_point :
           messagebox.showinfo(title="message",message="the game end ,the winner is player1 ")
        else :
           messagebox.showinfo(title="message",message="the game end ,the winner is player2 ")
           
#-----------------------------------------------------------------------------------------------------------------------------------------------------------------
#this two functions to player2  to check if two character are simllar or not and show user what he have choose
def getnum1_player2():
    global num3;
    num3=int(player2_entry1.get())-1
    
def getnum2_player2():
    
    
    global  num4;
    num4=int(player2_entry2.get())-1
    if chars.count("*") != 20:
        if chars[num3]==chars[num4] and  chars[num3]!="*"  :
            global player2_point ;
            player2_point+=1
            messagebox.showinfo(title="message",message=f"congratulation you got a point , you choosed {chars[num3]} twice , you have {player2_point} point ")
            chars[num3]="*"
            chars[num4]="*"
            player2_entry1.delete(0,END)
            player2_entry2.delete(0,END)

        elif num3 >20 or num4>20 :
            messagebox.showinfo(title="message",message="try to type number from 1 to 20")
            player2_entry1.delete(0,END)
            player2_entry2.delete(0,END)

        else :
            messagebox.showinfo(title="message",message=f"you choosed {chars[num3]} and {chars[num4]} try to type another two numbers")
            player2_entry1.delete(0,END)
            player2_entry2.delete(0,END)
    else:
        if player1_point > player2_point :
           messagebox.showinfo(title="message",message="the game end ,the winner is player1 ")
        else :
           messagebox.showinfo(title="message",message="the game end ,the winner is player2 ")


#-----------------------------------------------------------------------------------------------------------------------------------------------------------------
player1_label =Label(root, text="player1 :", bg="pink",padx=10, pady=5).grid(row=0,column=0)

player1_entry1 = Entry(root,width=25)
player1_entry1.grid(row=0,column=1,padx=10, pady=10)

player1_button1 =Button(root,text="OK",command = getnum1 ).grid(row=0,column=2)

player1_entry2 = Entry(root,width=25)
player1_entry2.grid(row=0,column=3,padx=10, pady=10)

player1_button2 =Button(root,text="OK",command = getnum2 ).grid(row=0,column=4)

#--------------------------------------------------------------------------------------------------------------
player2_label=Label(root, text="player2 :", bg="pink",padx=10, pady=5).grid(row=1,column=0)

player2_entry1 = Entry(root,width=25)
player2_entry1.grid(row=1,column=1,padx=10, pady=10)

player2_button1=Button(root,text="OK",command =getnum1_player2).grid(row=1,column=2)

player2_entry2 = Entry(root,width=25)
player2_entry2.grid(row=1,column=3,padx=10, pady=10)

player2_button2=Button(root,text="OK",command =getnum2_player2).grid(row=1,column=4)


root.mainloop() 