floor = int(raw_input("floor : "))
for i in range(floor):
    print " " * (floor - i) + "#" * (2 * i + 1)
