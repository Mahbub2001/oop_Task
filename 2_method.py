class Car:
    def __init__(self, brand):
        self.brand = brand
        print(f"The constructor is called for {self.brand}")

    def engine_start(self):
        print(f"Starting the engine of brand : {self.brand}")

    def drive(self, speed):
        print(f"{self.brand} is driving at speed {speed} km/h")

    @staticmethod
    def alert():
        print("peep peep!")

my_car = Car("Toyota")

my_car.engine_start()
my_car.drive(60)

Car.alert()
