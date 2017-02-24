def power(a,b):
    sonuc = 1
   
    for i in range (b):
        sonuc = sonuc * a
    return sonuc;

print("Sayilari giriniz:")
c = input()
c1 = input()
print(power(c,c1))

 
