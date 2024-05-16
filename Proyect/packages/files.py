import csv
with open("./Dates\\BD.csv", encoding="UTF-8") as arc:
    reader = csv.reader(arc)
    print(reader)