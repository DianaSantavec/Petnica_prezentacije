---
marp: true
---

<!-- paginate: true -->

# Operativni sistemi

## Diana Šantavec

*diana.santavec@gmail.com*
16.07.2021.

---

## Sadržaj

- Pojam

- Učitavanje operativnog sistema

- Proces

- Planer procesa

- Zaštita memorije

- Fajl sistem

---

## Uvod

### Operativni sistem?

---

## Uvod

- program koji omogućava aplikacijama jednostavniji pristup hardveru

- kontroliše izvršavanje aplikacija

- olakšava programiranje programa visokog nivoa

- nezavisnost programa od hardvera

---

## Uvod

- Prvi računari su samo izvršavali dati program (ENIAC 1945)

- batch: učita se više programa, izvrše se

- višekorisnički (1970-1980)

- prvi personalni (CP/M) (1980-1990)

- ...

---

## Učitavanje operativnog sistema

- prilikom uključivanja računara operativni sistem tek treba da se učita iz neke trajne memorije

- BIOS-MBR

- UEFI-GPT

---

## Učitavanje operativnog sistema (BIOS-MBR)

### BIOS?

---

## Učitavanje operativnog sistema (BIOS-MBR)

- BIOS (Basic Input/Output System)

- sadrži rutine koje omogućavaju detekciju hardvera (monitor, miš, tastatura, disk, RAM, ...)

- učitava se sa čipa

- testira hardver

---

## Učitavanje operativnog sistema (BIOS-MBR)

- boot sector (cilindar 0, glava 0, sektor 0)

- 512B

- *Primeri programa*

- https://youtu.be/1UzTf0Qo37A

---

## Učitavanje operativnog sistema (BIOS-MBR)

### MBR (Master Boot Record)

- 440B

- svaki hard disk ga sadrži

- sadrži tabelu particija

- Bootstrap Code
    - traži iz tabele fajl koji će izvršiti boot i učitava ga

- Boot Signature (0x55 0xAA)

---

## Učitavanje operativnog sistema (BIOS-MBR)

### Bootloader

- nalazi se na određenoj particiji

- koji operativni sistem, gde, odakle, parametri,...

- NTLDR, BOOTMGR, GRUB2, itd.

---

## Učitavanje operativnog sistema (BIOS-MBR)

- učitavanje fajl sistema

- učitavanje konfiguracionih fajlova

- lista operativnih sistema (ako ih ima više)

- pokretanje odabranog 

---

## Pokretanje operativnog sistema

- Prvi proces u Linuksu - init

- Pokreće ostale procese

- *primer koda*

---

## Procesi

### Proces?

---

## Procesi

- program kada se izvršava

- sadrži podatke o zauzetim ulazno/izlaznim uređajima, korisniku, zauzetim fajlovima, ...

- *primer kod*

---

## Procesi

![process in memory](/home/dianas/process_in_memory.png)

---

## Procesi

![stanja procesa](/home/dianas/process_states.png)

---

## Procesi

### Fork

- pravi kopiju (dete) originalnog procesa (roditelj)

- gašenje/pucanje roditeljskog procesa prouzrokuje gašenje deteta procesa

- dete proces zadržava i otvorene fajlove, ali su tokovi različiti

---

## Niti (thread)

- deo procesa

- podela poslova na manje delove

- paralelizacija procesa

---

## Broj korisnika

- singleuser

- multiuser

---

## Izvršavanje procesa
### Sekvencijalno

![sekvencijalno](/home/dianas/sekvencijalno.png)

---

## Izvršavanje procesa
### Time sharing

![time sharing](/home/dianas/time_sharing.png)

---

## Izvršavanje procesa
### Paralelno

![paralelno](/home/dianas/paralelno.png)

---

## Izršavanje procesa
### Five philosopher problem

- Pet filozofa sedi za okruglim stolom i na smenu razmišljaju i jedu. Svaki ima ispred sebe tanjir sa špagetama i između svaka dva tanjira se nalazi viljuška. Da bi mogao da jede, filozofu trebaju dve viljuške.

- zastoj (deadlock)

---

## Izršavanje procesa
### Five philosopher problem - rešenje


---

## Izršavanje procesa
### zastoj

![deadlock](/home/dianas/deadlock.png)

---

## Izršavanje procesa
### rešavanje zastoja

- sprečavanje

- dozvoliti da se desi, rešiti

- ako se desi restartovati sistem (Windows, Unix)

---

## Izršavanje procesa
### Semafor

- omogućava da ne može više procesa istovremeno da koristi neki resurs

- operacije:
    - čekaj
    - signal

---

## Planeri procesa

- programer ne mora da vodi računa da li će proces prepuštati resurse

- omogućava "bolju" smenu procesa u zavisnosti od potreba operativnog sistema

- omogućavaju efikasniju raspodelu resursa

- cilj da se maksimizuje upotreba procesora i minimizuje vreme čekanja

---

## Planeri procesa

- CPU

- non-preemptive
    - proces ne može biti zaustavljen u toku izvršavanja

- preemptive
    - planer procesa može prekinuti izvršavanje procesa

---

## Planeri procesa
### Vremena

- Vreme izvršavanja (execution time)

- Vreme ulaska u spremno stanje (arrival time)

- Vreme završavanja (finist time)

- Vreme izvršavanja na procesoru (CPU execution time)

---

## Planeri procesa
### Tipovi procesa 

- većinu izvršavanja iziskuju procesorske resurse (CPU bound)

- većinu izvršavanja rpvode čekajuci signal (I/O bound)

---

## Planeri procesa

- first-come first-served

- longest job first

- shortest job first

- round robin

- prioritetni

---

## Planeri procesa
### U realnom vremenu

- hard real time

- soft real time

---

## Upravljanje memorijom

---

## Upravljanje memorijom

- vođenje računa o popunjavanju (prazni/slobodni)

- dodela memorije

- oslobađanje memorije

---

## Upravljanje memorijom
### Adrese

- simboličke adrese
    
    - konstante, promenljive, labele instrukcija

- relativne adrese

    - kompajler simboličke prebacuje u relativne

- fizičke adrese

    - kada se program učita u memoriju

---

## Upravljanje memorijom
### swap

- korišćenje trajne memorije za nadokanadu RAM-a

- više memorije

- duže vreme za učitavanje programa (slanje na disk sporije)

---

## Upravljanje memorjiom
### Paging

- izdela procesa na blokove

- jednaki blokovi RAM-a

- ne moraju biti uzastopni

- Demand Paging

---

## Upravljanje memorijom
### Adrese

- virtualne (protected mode)
    
    - generiše program

    - ne mora ceo program biti stalno u memoriji

- fizičke
    
    - MMU 

---

## Upravljanje memorijom
### Alokacija memorije

- first fit

- best fit

- worst fit

---

## Upravljanje memorijom
### Fragmentacija

- interna fragmentacija

- eksterna fragmentacija

---

## Upravljanje memorijom
### Interfna fragmentacija

- pojavljuje se kada je memorija izdeljena u fiksne blokove

- procesu se dodeli više memorije nego što mu treba

- ako se memorija ne deli u blokove, fragmentacija će biti izbegnuta

---

## Upravljanje memorijom
### Eksterna fragmentacija

- pojavljuje se kada su blokovi proizvoljne ili promenljive veličine

- iako postoji dovoljno memorije, memorija je "razbacana"

- rešenje je da se sva slobodna memorija pregrupiše u jedan blok

- drugo rešenje je paging 

---

## Fajl sistem
### Fajl?

---

## Fajl sistem
### Fajl

- informacije sačuvane u trajnoj memoriji

- prava pristupa (čitanje, pisanje, izvršavanje)

---

## Fajl sistem
### Fajl

- različiti tipovi fajlova (obični, direktorijumi, specijalni)

- imaju različite strukture

---

## Fajl sistem
### Pristup fajlu

- sekvencijalno

- direktno/random

- preko indeksa 

---

## Fajl sistem
### Alokacija memorije za fajl

- Contiguous Allocation
    - zauzeta memorija za fajl je kontinualna

- Linked Allocation
    - sadrži pokazivače na različite blokove diska

- Indexed Allocation
    - sadrži listu svih indeksa blokova fajla

---

## Fajl sistem
### Direktorijum

- sadrži više fajlova

- kreiranje fajlova

- brisanje fajlova

- pretraga fajlova

- izlistavanje fajlova

---

## Fajl sistem
### Direktorijum

- jedan nivo

- dva nivoa (korisnik/folder/fajl)

- stablo

- graf

---


## Dalje?

- virtualizacija

- cloud

- distribuirani sistemi

- operativni sistemi koji se izvršavaju u realnom vremenu

- ...

---

# Hvala na pažnji

## Pitanja?
