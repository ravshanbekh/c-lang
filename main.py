# otam={'ismi':'Abdulla','yili':'1976','joyi':'Sirdaryo'}
# onam={'ismi':'Marxabo','yili':'1980','joyi':'Sirdaryo'}
# print(f"Otamning ismi {otam['ismi']}, {otam['yili']}-yilda, {otam['joyi']} viloyatida tug
# lugat={'if':'agar','else':'yoki','del':'ocirish','sorted':'saralash','title':'katta harf','append':'qoshish','integer':'butun','list':'royxat','float':'haqiqiy','string':'matn'}
# for k,q in sorted(lugat.items()):   
#     print(f"{k.title()}-{q}")

# kitoblar=[]
# savol='Yaxshi korgan kitobingizni kiriting  '
# savol+='(Dasturni toxtatish uchun \'stop\' ni bosing ): '
# qiymat=input(savol)
# while qiymat!='stop':
#     kitoblar.append(qiymat)
#     qiymat=input(savol)
# print("dastur tugadi")  
# print(kitoblar)      
    
# savol='yoshingizni kiriting'
# savol+=' (dasturni toxtatish uchun exit deb yozing): '

# while True:
#     yosh=(input(savol))
#     if yosh=='exit':
#         break
#     elif int(yosh)<7:
#         print('sizga chipta 2000 som')
#     elif int(yosh)>7 and int(yosh)<18:
#         print('sizga chipta 3000 som')
#     elif int(yosh)>18 and int(yosh)<65:
#         print('sizga chipta 10000 som')     
#     else : print('sizga chipta tekin')       
# print('dastur toxtadi')    
# savol ="Kiritilgan sonning ildizini qaytaruvchi dastur.\n"
# savol += "Musbat son kiriting "
# savol += "(dasturni to'xtatish uchun 'exit' deb yozing): "

# while True:
#     qiymat = input(savol)
#     if qiymat=='exit':
#         break
#     elif int(qiymat)<0:
#         continue
#     else:
#         ildiz = float(qiymat)**(0.5)
#         print(f"{qiymat} ning ildizi {ildiz} ga teng")
# buyurtmalar=[]
# while True:
#     buyurtma=input('Nima buyurtma qilasiz (dasturni toxyatish uchun stopni bosing): ')
#     if buyurtma=='stop':
#         break
#     buyurtmalar.append(buyurtma)
# print(buyurtmalar)    
# 
# def tyiltop(ism,yosh):
#     print(f"{ism.title()} {2020-yosh}-yilda tugilgan")
# tyiltop('olim',23)    
# def kub_kvadrat(son):
#     print(f"sonning kvadrati {son**2},kubi {son**3}")
# kub_kvadrat(7)     
# from pickle import TRUE


# def malumot(ismi,familiyasi,tugilgan_yili,joyi,email,manzili,tel_raqami=None):
#     """Mijoz haqidagi ma'lumotlar"""
#     mijoz={'ismi':ismi,'familiyasi':familiyasi,'tyili':tugilgan_yili,'tjoyi':joyi,'email':email,'manzili':manzili,'traqami':tel_raqami}
#     return mijoz
# print('mijoz haqidagi malumotni kiriting')
# mijozlar=[]
# while TRUE:
#     ismi=input('ismi :')
#     familiyasi=input('familiyasi: ')
#     tugilgan_yili=input('tyili: ')
#     joyi=input('tjoyi: ')
#     email=input('email: ')
#     manzili=input('manzili: ')
#     tel_raqami=input('raqami: ')
#     mijozlar.append(malumot(ismi, familiyasi, tugilgan_yili, joyi, email, manzili, tel_raqami=None))
#     javob=input('davom etasizmi ha/yoq')
#     if javob!='ha':
#         break
# print (mijozlar)
# for mijoz in mijozlar:
#     print(f"{mijoz['ismi'].title()} {mijoz['familiyasi'].title()}")    
        
    
# from pickle import TRUE


# def kattasi(a,b,c):
#     if a>b and a>c:
#         print(a)
#     elif b>a and b>c:
#         print(b)
#     elif c>a and c>b:
#         print(c)
# while TRUE:
#     a=int(input('Birinchi sonni kiriting: '))
#     b=int(input('ikkinchi sonni kiriting: '))
#     c=int(input('uchinchi sonni kiriting: '))                    
#     print(kattasi(a,b,c),"eng kattasi ")
#     javob=input('davom etasizmi ha/yoq: ')
#     if javob!='ha':
#         break
# from modulefinder import packagePathMap
# from re import S
# from this import d


# malumotlar={'diametri':None,'Perimetri':None,'yuzasi':None}
# def d_p_y(r):
#     d=2*r
#     p=2*3.14*r
#     y=3.14*r*r
#     malumotlar['diametri']=d
#     malumotlar['Perimetri']=p
#     malumotlar['yuzasi']=y
# while True:
#     r=int(input('Radiusini kiriting: '))
#     d_p_y(r)
#     print(malumotlar)
#     javob=input('yana davom etasizmi? ha/yoq')
#     if javob!='ha':
#         break


# def fibonachi(n):
#     """fibonachi sonlarini chiqarish jadvali"""
#     s=[]
#     for x in range(n):
#         if x==1 or x==0:
#             s.append(1)
#         else :
#             s.append(s[x-1]+s[x-2])   
#     return s
# print(fibonachi(49))   
# def kopaytma(*sonlar):
#     s=1
#     for son in sonlar:
#         s=s*son        
#     return s        


# print(kopaytma(1,2,3,4,5))
# talabalar={}
# def talaba(ismi,familiyasi,**talabalar):
#     talabalar['ismi']=ismi
#     talabalar['familiyasi']=familiyasi
#     return talabalar
# print(talaba('Salim','Jumaboev',yili=2002))
# import the library pulp as p
# import pulp as p

# # Create a LP Minimization problem
# Lp_prob = p.LpProblem('Problem', p.LpMinimize)

# # Create problem Variables
# x = p.LpVariable("x", lowBound = 0) # Create a variable x >= 0
# y = p.LpVariable("y", lowBound = 0) # Create a variable y >= 0
# # Objective Function
# Lp_prob +=  x - y

# # Constraints:
# Lp_prob += 2 * x -  y >= 2
# Lp_prob += x +  y <= 2

# Lp_prob += x >= 0
# Lp_prob += y >= 0

# # Display the problem
# print(Lp_prob)

# status = Lp_prob.solve() # Solver
# print(p.LpStatus[status]) # The solution status

# Printing the final solution
# Python3 code for implementation of Newton
# Raphson Method for solving equations

# An example function whose solution
# is determined using Bisection Method.
# The function is x^3 - x^2 + 2
def func( x ):
	return x * x * x - x * x + 2

# Derivative of the above function
# which is 3*x^x - 2*x
def derivFunc( x ):
	return 3 * x * x - 2 * x

# Function to find the root
def newtonRaphson( x ):
	h = func(x) / derivFunc(x)
	while abs(h) >= 0.0001:
		h = func(x)/derivFunc(x)
		
		# x(i+1) = x(i) - f(x) / f'(x)
		x = x - h
	
	print("The value of the root is : ",
							"%.4f"% x)

# Driver program to test above
x0 = -20 # Initial values assumed
newtonRaphson(x0)

# This code is contributed by "Sharad_Bhardwaj"
