m1<-array(c(20,10,40,30,60,80),dim=c(2,3,2))
print(m1)
m2<-array(c(80,20,30),dim=c(2,3,2))
print(m2)

#Create a vector
apple_colors<-c('green','green','yellow','red','red','red','green')
#Create a factor object 
factor_apple<-factor(apple_colors)
#Print the factor
print(factor_apple)
print(nlevels(factor_apple)) 

#Create the data frame
BMI<-data.frame(
    gender=c("Male","Male","Female"),
    height=c(152,171.5,165),
    weight=c(81,93,78),
    age=c(46,28,16)
)
print(BMI)