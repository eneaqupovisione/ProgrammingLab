def sum_list(lista):
    if  len(lista)== 0: 
        return None
    else:
        mylist = 0
        for number in lista:
            mylist += number
        return mylist
        
