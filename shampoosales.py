#apro il file
my_file = open ("shampoo_sales.csv" , "r")
#stampo il file a schermo (solo i primi 100 caratteri)
print (my_file.read()[0:100])
#chiudo il file
my_file.close()


