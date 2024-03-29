#creo una classe(oggetto) di nome CSVFile (che rappresenti un file CSV) e che:
        #1) venga inizializzato sul nome del file csv
         #2) abbia un attributo "name" che ne contenga il nome
         #3) abbia un metodo(funzione) "get_data" che torni i dati dal file CSV come lista di liste ( esempio [1,2,3], [0,5,3],[1,1,1]])

#Classe per l'oggetto CSVFile
class CSVFile():
    
    #istanza(inizializzazione) al nome del file CSV #faccio in modo che abbia un attributo "name" che contenga il nome 
        #__init__ è una roba magica cazzi di python, a te interessa sfruttarlo (occhio a __ ...__)
        #self rappresenta l'istanza della classe, lega gli attributi ai dati argomenti (quasi come un "&" per indicare l'indirizzo
    def __init__(self, name):
        self.name  =  name   
       
        
    #faccio in modo che abbia un metodo 'get_data( )' che torni i dati dal file CSV come lista di liste        
    def get_data(self):

        #creo una lista di nome "risultato" per contenere le liste 
        risultato = []
        #l'istruzione "with" serve per aprire+chiudere il file
        with open(self.name) as my_file:
            #per ogni linea nel file
            for line in my_file:
                #spacco la linea sulla "," e tolgo gli "\n"
                elements = line.strip('\n').split(',')
                if elements [0] != 'Date':
                    #aggiungo alla lista "risltato" queste sotto liste spaccate
                    risultato.append(elements) 
        return risultato
shampoo = CSVFile('shampoo_sales.csv')
        
