class CSVFile ():
    def __init__(self, name): 
        self.name = name
        try: 
            with open (self.name) as test1:
                test1.readlines()
        except Exception:
            print("Errore: file mancante")

    def get_data (self):
        risultato = []
        with open(self.name) as my_file:
            for line in my_file:
                elements = line.strip('\n').split(',')
                if elements[0] != 'Date':
                    risultato.append(elements)
        return risultato
    