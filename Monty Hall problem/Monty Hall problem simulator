import random

tem = 0;
cor = 0;
for i in range(10000):
    choice = -1;
    a =[0,0,0];
    car = random.randint(0, 2)
    
    a[car] = 1;
    f_choice = random.randint(0, 2)

    door = random.randint(0, 2)

    while a[door] == 1 or door == f_choice:
        door = random.randint(0, 2)

    s_choice = random.randint(0, 2)

    while s_choice == f_choice or s_choice == door:
        s_choice = random.randint(0, 2)
   

    print("First choice : %d Final choice : %d Location of Car : %d" %(f_choice,s_choice,car))
    if a[s_choice] == 1 :
        print("Correct")
        cor += 1;    
    else:
        print("Incorrect")

    print('')
    tem += 1;

print("Number of trials : %d Correct : %d \nProbability of being correct : %f%%" %(tem,cor,cor/tem*100))
