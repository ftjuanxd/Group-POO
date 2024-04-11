#Create Class
class Mascota:
    #Create Constructor
    def __init__(self,name,age,raza):
        self.name=name  
        self.age=age
        self.raza=raza
    #Create Methods      
    def Saludar(self):
        print(f"{self.name} te quiere saludar") 

#Create Object        
dog = Mascota("Lupe",7,"Pincher")
#Call Method
dog.Saludar()