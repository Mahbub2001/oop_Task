class Vehicle:
    def __init__(self, brand):
        self.brand = brand

class Car(Vehicle):
    def __init__(self, brand, model):
        super().__init__(brand)
        self.model = model

class car_electric(Car):
    def __init__(self, brand, model, battery_capacity):
        super().__init__(brand, model)
        self.battery_capacity = battery_capacity

    def display(self):
        print(f"The car Brand: {self.brand}, Model: {self.model}, Battery Capacity: {self.battery_capacity} kWh")

def main():
    my_car = car_electric("Tesla", "Model S", 200)

    my_car.display()

if __name__ == "__main__":
    main()
