if (!require("reshape2")) {
  install.packages("reshape2")
}
library(reshape2)
df<- data.frame(
  id = 1:3,
  time = c("Morning","Afternoon","Evening"),
  temperature = c(68, 75, 72),
  humidity = c(45,50,48)
)
df_melted <- melt(df,id.vars = c("id","time"),variable.name = "measurement",
                  value.name = "value")
df
print("\n")
print(df_melted)