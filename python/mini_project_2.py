import random
l=["rock","paper","scissors"]
u=0
c=0
print("\nROCK PAPER SCISSORS\n")
print("RULES:\n1.TYPE \'end\' TO END THE GAME\n2.Type correct spellings(rock,paper,scissors)\n3.Use lower case\n")
while True:
    a=input("user: ")
    b=random.choice(l)
    if a=="end":
        print("\nEND OF THE GAME\n")
        print("USER:",u)
        print("CPU:",c)
        break
    else:
        print("CPU:",b)
        if a=="rock":
            if b=="rock":
                print("Its a Tie")
            if b=="paper":
                print("CPU Win - paper will hold the rock")
                c+=1
            if b=="scissors":
                print("User Win - rock will destroy the scissors")
                u+=1
        elif a=="paper":
            if b=="rock":
                print("User Win - paper will hold the rock")
                u+=1
            if b=="paper":
                print("Its a Tie")
            if b=="scissors":
                print("CPU Win - scissors will cut the paper")
                c+=1
        elif a=="scissors":
            if b=="rock":
                print("CPU Win - rock will destroy the scissors")
                c+=1
            if b=="paper":
                print("User Win - scissors will cut the paper")
                u+=1
            if b=="scissors":
                print("Its a Tie")
        else:
            print("CAUGHT YOU! Please follow rules")
