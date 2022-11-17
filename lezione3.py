valori=[]
my_file=open('shampoo_sales.csv', 'r')
for line in my_file:
    elementi=line.split(',')
    if elementi[0] != 'Date':
        valore = elementi[1]
return valore
valori.append(valore)
def Somma(valori):
    if  len(valori)== 0: 
        return None
    else:
        Totale_vendite = 0
        for number in valori:
            Totale_vendite += number
        return Totale_vendite
        