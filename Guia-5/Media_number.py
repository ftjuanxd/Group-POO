#Create Function Average
def Average(numbers):
    average_ = int()
    cant = len(numbers)
    for i in numbers:
            average_ += i
    average_ = average_/cant
    return print(f"The average the numbers typed it's:{average_}")

#First Create the Variables and lists to the Program
opc = ""
numbers = list()

#Declarate Loop While Until Opc will Be different of "N" or "n"
while opc != "N" and opc != "n":
    
    #the user type the numbers that wish
    n = int(input("Type a number: ")) 
    
    #Add the numbers the user in the list
    numbers.append(n)
    
    #The user choose if continue or no
    opc = input("Do You Wish Continue Typing? S/N")
#Call the function that return the average the numbers
Average(numbers)