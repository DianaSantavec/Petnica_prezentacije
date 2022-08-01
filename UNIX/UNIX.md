---
marp: true
---

<!-- paginate: true -->

# UNIX
## Diana Šantavec
diana.santavec@gmail.com
20.10.2021.

---

# Unix
* kanse 1960-te
* portabilan (pisan u C-u)
* više manjih specijalizovanih programa koji rešavaju jedan problem
* razvoj sličnih sistema
* POSIX standard (Open Group)
  * The Portable Operating System Interface
  * IEEE
---

# Linux?
---

# Linux
* GNU (GNU's not Unix!)
* kernel
* pisan po POSIX standardu
* distribucije
* programi pisani za UNIX mogu da se pokrenu
---

# Unix shell
* interpreter za komandnu liniju
* komunikacija korisnika sa operativnim sistemom
* sh - SHell
* bash - Bourne Again SHell
  * IEEE POSIX P1003.2/ISO 9945.2 Shell and Tools standard
* interaktivan command-language i scripting jezik
---

# Terminal? 
* ctrl + alt + t
* komandna linija
* prompt `username@hostname:location$`
  * `username` - ime korisnika
  * `hostname` - ime sistema u koji smo ulogovani
  * `location` - direktorijum u kom se nalazimo
  * `$` - graničnik za kraj prompt-a
---

# Fajl sistem
![image-name](unix_tree.png)

---

# Putanje

* apsolutna
    * /home/user/images
* relativna
    * ../images

---

# Fajl
* "Sve je fajl"
    * uređaji
    * procesi
    * direktorijumi

* Inode - struktura podataka koja sadrzi podatke o fajlu
    * jedinstven ID

* _Demonstracija_
---

# Direktorijum
* specijalan fajl u kom pise koje fajlove direktorijum sadrži
* sadrži bar dva linka:
    * na roditeljski u oznaci `..` (osim za / )
    * na sebe u oznaci `.` 
* _Demonstracija_
---

# Komanda
* ime komande
* dodatni parametri
* `ls /home/user/Images`
---

# Rad sa direktoriumima

* `cd` - promena trenutnog direktorijuma
* `ls` - izlistati sadržaj direktorijuma
    * tree
* `pwd` - ispiši putanju do trenutnog direktorijuma
* `mv` - premesti
* `cp` - kopiraj
* `mkdir` - napravi direktorijum
* `rm` - obriši
---

# `cd`
* promena trenutnog direktorijuma
* parametri: putanja
---

# `ls`
* izlistavanje sadržaja trenutnog direktrijuma
* paramtetri:
    * -l - prikaz detalja
    * -a - prikaz fajlova koji počinju sa `.`
* putanja
---

# `pwd`
* ispis putanje na kojoj se korisnik trenutno nalazi
---

# `mv`
* premesti fajl
* takođe i za promenu naziva fajla
* parametri
    * -v - verbose (ispis početne i krajnje destinacije fajla)
---

# `cp`
* kopiranje
* parametri:
    * -r rekurzivno
---

# `mkdir`
* napravi direktorijum
* parametri:
    * -p ako nedostaje roditeljski, napravi ga
---

# Naziv sa specijlnim karakterima
* `"`, `?`, `*`, `$`
* dodavanjem `\` pre specijalnog karaktera
* pisanjem naziva pod navodnicima
---

# `rm`
* obrisati
* parametri:
    * -r - rekurzivno
    * -f - force
    * -d - obrisi prazan direktoijum (`rmdir`)
---

# Demonstracija
---

# Vežba

* pravljenje direktorijuma

---
# Vežba 

* brisanje direktorijuma 

---

# `clear`
* `clear`
* `ctrl + l`
---

# man

* manual page
* man man
* _Demonstracija_
---

# Vim
* tekst editor
* Vi Improved
* dva moda:
    * command mode
    * insert mode 
* visual mode 

---

# Vim command mode
* undo
* save
* quit
* copy - paste
* pomeranje kurzora
* `esc`
---

# Vim insert mode
* unos teksta
* `i`
* `a`
---

# Vežba
* napraviti fajl
* prekopirati
* izlistati
* promeniti ime
---

# Linkovi

* specijalni fajlovi
* meki link - pokazuje na putanju do fajla
    * ukoliko se obriše originalni, link ne radi
* tvrdi link - pokazuje na inode
    * ne može biti napravljen za drugu particiju
    * ne može biti napravljen za folder
    * ukoliko se obriše originalni fajl, link će i dalje raditi

---

# `ln`
* `ln -s SOURCE_FILE LINK_NAME`
* `ln SOURCE_FILE LINK_NAME`
---

# Sistem dozvola
* `-rwxr-xr--`
* r: read
    * za foldere označava mogućnost izlistavanja fajlova
* w: write
    * za foldere označava mogućnost rada sa fajlovima u direktorijumu i menjanje adtribuda direktorijuma
* x: execute
    * za foldere označava mogućnost ulaska i pristupa fajlovima u direktorijumu
* _Demonstracija_
---

# `-rwxr-xr--`
* prvi karakter:
    * d - direktorijum
    * s - specijalan fajl
    * '-' -regularni fajl
---

# `-rwxr-xr--`
1. set za vlasnika
2. set za članove grupe vlasnika
3. set za ostale

---

# `chmod` 
* promena prava pristupa za fajlove
* _who_ _what_ _which_
---

# `chmod` _who_
* u: user
* g: group
* o: others
* a: all
---

# `chmod` _what_
* -: uklanjanje dozvole
* +: davanje dozvole
* =: postavi permisiju, a ostale ukloni
---
# `chmod` _which_
* r
* w
* x
---

# `chmod` primer
* chmod +x
---

# `chmod` sa brojevima
* x = 2^0 = 1
* w = 2^1 = 2
* r = 2^2 = 4
* r + x = 5
---

# `chmod` sa brojevima
* `chmod 755`
* `chmod 713`
* `chmod 547`
---

# Korisnik i grupe
* više korisnika može da pristupa sistemu
* `/etc/passwd` i `/etc/group`
* id:
    * uid
    * gid
* svaki korisnik dobija istoimenu grupu
---

# `chown`
* `chown [OPTION]... [OWNER][:[GROUP]] FILE...`
* _Demonstracija_
---

# Skripte.sh
* tekst koji sadrži komande
* komentari `#`
* hash-bang: `#!/bin/bash`
* ekstenzija `.sh`
* `chmod +x script_name.sh`
---

# Hello world
* `echo Hello world`
* parameters: 
    * -e
        * \t
        * \n
        * \v
        * \r
    * -n
    
* CRLF vs LF
---

# Vežba
* hello world
* koristeći skriptu, izlistati sadržaj direktorijuma

# Preusmeravanje ulaza/izlaza

* stdin (0) - standardni ulaz
* stdout (1) - standardni izlaz
* stderr (2) - standardni izlaz za greške
* opcionalan broj fajl deskriptora: 4, 5, 6,...
---

# Preusmeravanje ulaza/izlaza

* \> - ukoliko fajl postoji, napraviće nov
* \>> - dodaje na kraj fajla ukoliko postoji
* < - ulaz
---
# Vežba

* preusmeriti izlaz postojeće skripte u fajl
* proslediti izlaz komande `ls` u fajl
---

# Pajpovi
* služi za preusmeravanje izlaza komande u drugu
* može se koristiti i za procese i programe
---

# Varijable
- $USER – trenutni korisnik
- $HOME – putanja do kućnog foldera trenutnog korisnika
- $PATH – lista foldera u kojima se traže izvršne datoteke
- $0, $1, $2,... parametri koji se unose sa komandne linije pri pokretanju
- $0 je ime skripte
- $# broj parametara
- $@ lista parametara
---

# `read`
* omogućava učitavanje vrednosti sa konzole
* `read variable_name`
* `read var1 var2 var3`
* `read -p 'Username: ' var_user`
* `read -s password`
---

# Vežba
* preći u kućni direktorijum koristeći `echo` i `cd` komande
* ispisati prosleđen parametar skripti
* ispisati korisnički unos
---

# Kontrola toka i petlje
* if
* for
* while
---

# `if`
* ukoliko je uslov ispunjen izvrši
* operatori `>`, `<`, `==` se koriste za stringove
* `-gt`, `-lt`, `-ge`, `-le`, `-eq`, `-ne` se koriste za brojeve
* `-f` fajl je
* `-d` direktorijum je 
---

# `if` sintaksa

```

if [[ var -gt 5 ]]
then
    echo veca je vrednost od 5
elif [[ vat -eq  ]]
    echo vrednost je 5
else
    echo vrednost je manja od 5
fi

```
---

# Demonstracija
* `prekidac.sh`
---

# Vežba
* proveriti da li je korisnik uneo broj 1
---

# Operacije

* \+
* \-
* \*
* /
* %
---

# `while`
* izvršava se dok je uslov ispunjen

```
while [[ uslov ]]
do
    echo hello
done
```
---

# `until`
* izvršava se dok se uslov ne ispuni
```
while [[ uslov ]]
do
    echo hello
done
```
---

# for
* ukoliko znamo unapred koliko će se puta izvršiti

```
for variable in 1 2 3 4 .. 10
do
    echo $variable
done
```
* mogu da se naprave oblasti `{1..5}`
---

# Vežba

* sabrati sve brojeve prosleđene kao parametre
* ukoliko suma brojeva prelazi 100 ispisati upozorenje
---

# Zadatak
* napraviti text-based igru
---


# komande za rad sa tekstom i fajlovima
* sed
* grep
* sort
* cut
* find
---

# Interesantne price
* nogroup
* nobody
* sticky bit (`/tmp`)
---

# Hvala na pažnji!
