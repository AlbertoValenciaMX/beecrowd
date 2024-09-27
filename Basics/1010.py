p1 = input()
p2 = input()
txt = format("VALOR A PAGAR: R$ {:.2f}")

p1 = p1.split(" ")
p2 = p2.split(" ")

print(txt.format((float(p1[1])*float(p1[2]))+(float(p2[1])*float(p2[2]))))