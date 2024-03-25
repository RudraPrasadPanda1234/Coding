# If ggplot2 is not installed, install it
# install.packages("ggplot2")

# Load the ggplot2 package
library(ggplot2)

# Define 2 vectors
cars <- c(1, 3, 6, 4, 9)
trucks <- c(2, 5, 4, 5, 12)

# Create a data frame
data <- data.frame(
  x = 1:length(cars),
  cars = cars,
  trucks = trucks
)

# Create a plot using ggplot2
ggplot(data) +
  geom_line(aes(x = x, y = cars), color = "blue") +
  geom_line(aes(x = x, y = trucks), color = "red", linetype = "dashed") +
  labs(title = "Autos", x = "Index", y = "Value") +
  theme_minimal()

# Save the plot as an image file (PNG format) using ggsave
ggsave("plot.png")