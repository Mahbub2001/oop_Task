# python doesn't have method overloading
# but it can be use by below procedure  

class Printer:
    def print_value(self, value):
        if isinstance(value, int):
            print("Printing integer:", value)
        elif isinstance(value, float):
            print("Printing float:", value)
        elif isinstance(value, str):
            print("Printing string:", value)

def main():
    printer = Printer()

    printer.print_value(20)
    printer.print_value(3.14)
    printer.print_value("Hello,I'm Turza")

if __name__ == "__main__":
    main()
