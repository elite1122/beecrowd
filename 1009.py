name = input()
fixed_salary = float(input())
sales_total = float(input())

extra_earn = (sales_total*15)/100
jj = format(fixed_salary+extra_earn,'.2f')

print(f'TOTAL = R$ {jj}')
