---
marp: true
---

<!-- paginate: true -->

# UNIX
## Diana Šantavec
diana.santavec@gmail.com
01.08.2022.

---
# Istorija
* Programi su morali biti pisani za svaki model računara
* OS/360 - IBM-ov operativni sistem (1964)
    * IBM System/360 Operating System
    * Ista hardverska arhitektura
    * Ponovno korišćenje istog operativnog sistema
* Nema virtualnu memoriju
    * Batch poslovi su se izvršavala u istom adresnom prostoru
    * Slaba zaštita između poslova
---

# Unix
* Operativni sistem nastao 1960-ih
* Portabilan (pisan u C-u)
* Više manjih specijalizovanih programa koji rešavaju jedan problem
* Razvoj sličnih sistema
* POSIX standard
  * The Portable Operating System Interface
  * IEEE
---

# Linux?
---

# GNU/Linux
* GNU softver sa Linux kernelom
* GNU (GNU's not Unix!)
* Kernel
* POSIX-compliant
* Programi pisani za UNIX mogu da se pokrenu
* Distribucije
---

# Unix shell
* Interpreter za komandnu liniju
* Komunikacija korisnika sa operativnim sistemom
* sh - SHell
* bash - Bourne Again SHell
  * IEEE POSIX P1003.2/ISO 9945.2 Shell and Tools standard
* Interaktivan command-language i scripting jezik
---

# Terminal? 
* Komandna linija
* Case sensitive
* Prompt `username@hostname:location$`
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
---

# Fajl

* Inode - struktura podataka koja sadrzi podatke o fajlu na disku
    * jedinstven ID
    * `ls -i`
* Za pristup otvorenim fajlovima - `struct file`
    * file descriptor
---

# Direktorijum
* Specijalan fajl u kom piše koje fajlove direktorijum sadrži
* Sadrži bar dva linka:
    * na roditeljski u oznaci `..` (osim za / )
    * na sebe u oznaci `.` 
* _Demonstracija_
---

# Komanda
* ime komande
* opcije i dodatni parametri
* `ls /home/user/Images`
---

# Rad sa direktoriumima

* `cd` - promena trenutnog direktorijuma
* `ls` - izlistati sadržaj direktorijuma
    * `tree`
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
* opcije:
    * -l - prikaz detalja
    * -a - prikaz fajlova koji počinju sa `.`
* parametri: putanja
---

# `pwd`
* ispis putanje na kojoj se korisnik trenutno nalazi
---

# `mv`
* premesti fajl
* takođe i za promenu naziva fajla
* opcije: 
    * -v - verbose (ispis početne i krajnje destinacije fajla)
* parametri:
    * lokacija fajla
    * lokacija gde se fajl kopira
---

# `cp`
* Kopiranje
* Opcije:
    * -r rekurzivno
* Parametri:
    * lokacija fajla
    * lokacija gde se fajl kopira
---

# `mkdir`
* Napravi direktorijum
* Opcije:
    * -p ako nedostaje roditeljski, napravi ga
---

# Naziv sa specijlnim karakterima
* `"`, `?`, `*`, `$`
* Dodavanjem `\` pre specijalnog karaktera
* Pisanjem naziva pod navodnicima
* _Demonstracija_
---

# `rm`
* Obrisati
* Opcije:
    * -r - rekurzivno
    * -f - force
    * -d - obrisi prazan direktoijum (`rmdir`)
* Parametri:
    * Putanja do fajla
---

# Demonstracija
* Napraviti direktorijum
* Ući u nov direktorijum
* Napraviti poddirektorijum
* Izlistati roditeljski direktorijum
* Otvoriti u editoru teksta roditeljski direktorijum
* Obrisati oba direktorijuma
---

# Vežba - Pravljenje direktorijuma

* Napraviti direktorijum `Hello World`
* Napraviti poddirektorijum `druga_verzija`

---
# Vežba - Izlistavanje sadržaja direktorijuma

* Izlistati sadržaj direktorijuma `Hello World`

---

# Vežba  - Brisanje direktorijuma

* Jednom komandom obrisati oba direktorijuma

---

# `clear`
* `clear`
* `ctrl + l`
* `reset`
---

# History
* ctrl+r i hository file & history -> !102 (bang102)
    HISTTIMEFORMAT="%Y-%m-%d %T " - poslednji space da stavi razmak izmedju datuma i komande (moze imati problem sa datumom)
    ~/.bashrc (objasniti i sta je) HISTCONTROL ignore lines include space (ako se unese space pre komande nece se pojaviti u istoriji)
---

# Skraćenice u terminalu 

* ctrl+u gore, dole, ctrl+a, ctrl+e
* !!

---

# man

* manual page
* man man
* _Demonstracija_
---

# Kreiranje fajlova
* `touch`
    * Pravljenje fajla bez sadržaja
    * Parametri: putanje do fajlova

* `cat`
    * Prikaz sadržaja fajla
    * Pravljenje fajla sa tekstom (biće objašnjeno posle)
    * Parametri: putanja do fajlova
---

# Brisanje samo sadržaja fajlova
* `truncate`
* Menja veličinu fajla
* Opcije:
    * -s - veličina
* Parametri:
    * Putanja do fajla
* _Demonstracija_
---

# Vim
* Tekst editor
* Vi Improved
* Dva moda:
    * command mode
    * insert mode 
* Visual mode 

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
* Unos teksta
* `i`
* `a`
---

# Vežba
* U /home/`username` napraviti direktorijum `files`
* Napraviti fajl `new_file` u direktorijumu `files`
* Napisati ime i prezime u fajl
* Napraviti poddirektorijum `saved_files`
* Prekopirati fajl u poddirektorijum
* Promeniti ime prekopiranog fajla
* Obrisati originalan fajl
---

# Linkovi

* Specijalni fajlovi
* Meki link - pokazuje na putanju do fajla
    * ukoliko se obriše originalni, link ne radi
* Tvrdi link - pokazuje na inode
    * ne može biti napravljen za drugu particiju
    * ne može biti napravljen za folder
    * ukoliko se obriše originalni fajl, link će i dalje raditi

---

# `ln`
* `ln -s SOURCE_FILE LINK_NAME`
* `ln SOURCE_FILE LINK_NAME`
* _Demonstracija_
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
* Prvi karakter:
    * d - direktorijum
    * '-' -regularni fajl
    * l - symbolic link
---

# `-rwxr-xr--`
* Prvi karakter - dodatno
    * c - character device file
    * b - block devide file
    * s - local socket file
    * p - named pipe
* *Link: https://linuxconfig.org/identifying-file-types-in-linux*    
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
* Više korisnika može da pristupa sistemu
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

# Vežba
* Promena šifre upotrebom `passwd` komande
* Ulogujte se ponovo
---

# Demonstracija
* `prekidac.sh`
---

# Pokretanje više komandi
* `;`
    * Izvršiće sve komande u sekvenci
    * `komanda1` ; `komanda2`
* `&&`
    * Izvršavaće komande dok jedna ne vrati grešku ili se sve izvrše
    * `komanda1` && `komanda2`
* _Demonstracija_
---

# Vežba - Izvršavanje više komandi
* U kućnom direktorijumu napraviti direktorijum `multiple_commands`
* Iz kućnog direktorijuma napravite fajl u kreiranom direktorijum i izlistajte direktorijum `multiple_commands`
---

# Skripte.sh
* Tekst koji sadrži komande
* Komentari `#`
* hash-bang: `#!/bin/bash`
* Ekstenzija `.sh`
* `chmod +x script_name.sh`
---

# Hello world
* `echo Hello world`
* Opcije: 
    * -e
        * \t
        * \n
        * \v
        * \r
    * -n
* CRLF vs LF
---

# Vežba - Skripte
* Napisati skriptu koja ispisuje `hello world`
* Koristeći skriptu, takođe izlistati i sadržaj direktorijuma
---

# Promena direktorijuma u skirpti

* `cd` - ali paziti na scope
* `pushd` & `popd`
* _Demonstracija_
---

# Preusmeravanje ulaza/izlaza

* stdin (0) - standardni ulaz
* stdout (1) - standardni izlaz
* stderr (2) - standardni izlaz za greške
* Opcionalan broj fajl deskriptora: 4, 5, 6,...
---

# Preusmeravanje ulaza/izlaza

* \> - ukoliko fajl postoji, napraviće nov
* \>> - dodaje na kraj fajla ukoliko postoji
* < - ulaz
---

# Vežba - Preusmeravanje izlaza

* Preusmeriti izlaz postojeće skripte u fajl
* Proslediti izlaz komande `ls` u fajl
---

# Pajpovi

* `|`
* Služe za preusmeravanje izlaza jedne komande u drugu
* Može se koristiti i za procese i programe
* _Demonstracija_
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

# Varijable - Dodatno

---

# `read`
* omogućava učitavanje vrednosti sa konzole
* `read variable_name`
* `read var1 var2 var3`
* `read -p 'Username: ' var_user`
* `read -s password`
---

# Vežba
* Napraviti skriptu kojoj se prosleđuje jedan parametar
* Unutar skripte preći u kućni direktorijum
* Ispisati prosleđen parametar skripti u fajl
* Očitati unos od korisnika i ispisati ga u fajl
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

# `if` sintaksa - /bin 

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

# Vežba

* Očitati unos korisnika i proveriti da li je korisnik uneo broj 1
---

# Operacije

* \+
* \-
* \*
* /
* %
---

# `while`
* Izvršava se dok je uslov ispunjen

```
while [[ uslov ]]
do
    echo hello
done
```
---

# `until`
* Izvršava se dok se uslov ne ispuni
```
while [[ uslov ]]
do
    echo hello
done
```
---

# for
* Ukoliko znamo unapred koliko će se puta izvršiti

```
for variable in 1 2 3 4 .. 10
do
    echo $variable
done
```
* Mogu da se naprave oblasti `{1..5}`
---

# Vežba

* Napraviti skiriptu koja će primati brojeve kao parametre (proveriti na početku da li su **svi** parametri brojevi)
* Sabrati sve prosleđene brojeve
* Ukoliko suma brojeva prelazi 100 ispisati upozorenje
---

# Interesantne price
* nogroup
* nobody
* sticky bit (`/tmp`)
---
# Rad sa tekstom
---

# Komande za rad sa tekstom i fajlovima
* `find`
* `head`
* `tail`
* `cut`
* `sort`
* `grep`
* `sed`
---

# `find`
* Traženje fajla
* `find starting_direcotry -name file.txt`
* -iname - i velika i mala slova
* -type d - traži direktorijum
* Upotreba `*`
* Pretraga i po permisijama, korisnicima, grupama,...
* _Demonstracija_
---

# `head` i `tail`
* `head`
    * Dobijanje prvih *n* linija fajla
    * `head -n 5 file.txt`
* `tail`
    * Dobijanje poslednjih *n* linija fajla
    * `tail -n 5 file.txt`
* `tail -f /var/log/syslog`
* _Demonastracija_
---

# Rad sa kolonama
* IFS
* `unset IFS`
---

# `cut`
* Izdvajanje dela linije teksta iz fajla ili prosleđenog iz druge komande
* -d - Definisanje graničnika
* -f - Polje koje se izdvaja
* _Demonastracija_
--- 

# `sort`
* Sortira sadržaj fajla liniju po liniju
* -r - reverse
* -n - numerički
* -k *n* - po koloni
* -u - sortira i uklanja duplikate
* -M - po mesecu 
* _Demonastracija_
---

# `grep`
* Pretraga teksta
* -i - I velika i mala slova
* -r - rekurzivno
* -c - koliko se puta pojavio
* -A -B -C - Prikaz linija pre i posle traženog stringa
---

# `grep` i regex izrazi
* 'first|second'
* 
---

# `sed`
---

# Pokretanje u pozadini
* `&`
    * Izvršava komandu u pozadini
* `ctrl+z `
    * salje SIGTSP - pauzira proces i šalje u pozadinu
* `fg`
    * Nastavlja izvršavanje pauziranog procesa
* _Demonstracija_
---


# Ideja za vežbu
* Napraviti text-based igru
* *Link: https://www.tecmint.com/best-linux-terminal-console-games/*
---

# Behind the scenes?
---

# Hvala na pažnji!
