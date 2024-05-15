class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.speed = 0

    def accelerate(self, incr):
        self.speed += incr

    def brake(self, decrement):
        self.speed -= decrement

    def display_speed(self):
        print("Current speed of the car is :", self.speed)

my_car = Car("Mercedes", "Mayback", 2022)

print(f"Car Brand: {my_car.make}\nCar Model: {my_car.model}\nCar Year: {my_car.year}")

my_car.accelerate(20)
my_car.display_speed()

my_car.brake(5)
my_car.display_speed()
