import numpy as np

harf_notu = []
akts = []
gecme_notu = []
# not.txt dosyasını aç ve sütun sütun verileri al
with open('not.txt') as fobj:
    for line in fobj:
        row = line.split()
        harf_notu.append(row[-2])
        akts.append(row[-3])

#String olarak alınan veriyi integer'a dönüştür. 
ects = list(map(int, akts)) 

i = 0
#Geçme harf notunu geçme notuna dönüştür.
for i in range(len(harf_notu)):
      if harf_notu[i]=="A1":
         gecme_notu.append(4.00)
      if harf_notu[i]=="A2":
          gecme_notu.append(3.75)
      if harf_notu[i]=="A3":
          gecme_notu.append(3.50)
      if harf_notu[i]=="B1":
          gecme_notu.append(3.25)
      if harf_notu[i]=="B2":
          gecme_notu.append(3.00)
      if harf_notu[i]=="B3":
          gecme_notu.append(2.75)
      if harf_notu[i]=="C1":
          gecme_notu.append(2.50)
      if harf_notu[i]=="C2":
          gecme_notu.append(2.25)
      if harf_notu[i]=="C3":
          gecme_notu.append(2.00)
      if harf_notu[i]=="D":
          gecme_notu.append(1.75)
      if harf_notu[i]=="F3":
          gecme_notu.append(0.00)
      if harf_notu[i]=="F2":
          gecme_notu.append(0.00)
      if harf_notu[i]=="F1":
          gecme_notu.append(0.00)
      
       
          
CGPA = np.dot(ects,gecme_notu)/np.sum(ects)
print("Toplam alınan ders:", len(ects))
print("CGPA:", CGPA)
