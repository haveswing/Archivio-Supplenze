from datetime import datetime

class Inserimento:
    def __init__(self, istituto, dataDa, dataA, classeDiConcorso, tipologiaDiImpiego):
        self.istituto = istituto
        self.dataDa = dataDa
        self.dataA = dataA
        self.classeDiConcorso = classeDiConcorso
        self.tipologiaDiImpiego = tipologiaDiImpiego

    def salva(self, istituto, dataDa, dataA, classeDiConcorso, tipologiaDiImpiego):
        linea = "\n" + istituto + "   " + dataDa + "   " + dataA + "   " + classeDiConcorso + "   " + tipologiaDiImpiego
        print(linea)
        f = open('supplenze.txt', 'a')
        f.write(linea)
        f.write("/n")
        f.close()

Inserimento(istituto=input("Inserisci l'istituto comprensivo: \n"),
            dataDa=input("dalla data: \n"),
            dataA=input("alla data: \n"),
            classeDiConcorso=input("inserisci la classe di concorso: \n"),
            tipologiaDiImpiego=input("inserisci la tipologia di impiego: \n"))

