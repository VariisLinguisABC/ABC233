input_array = input().split(" ")
sticked = int(input_array[0])
required = int(input_array[1])
total_amount_of_stamps = sticked
price_of_10stamp = 10
additional_number_of_sheets = 0

while total_amount_of_stamps < required:
    total_amount_of_stamps += price_of_10stamp
    additional_number_of_sheets += 1

print(additional_number_of_sheets)
