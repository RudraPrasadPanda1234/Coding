#WAP to convert distance in meters to kilometers.
def meters_to_kilometers(meters):
    return meters / 1000

distance_in_meters = float(input("Enter distance in meters: "))
distance_in_kilometers = meters_to_kilometers(distance_in_meters)
print("Distance in kilometers:", distance_in_kilometers)

distance_meters = float(input("Enter the distance in meters: "))
distance_kilometers = distance_meters / 1000
print("The distance in kilometers is:", distance_kilometers)