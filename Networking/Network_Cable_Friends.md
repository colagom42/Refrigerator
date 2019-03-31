#Networkig

- communicating machine for effectivity.

##LAN(Local Area Networking)

Network for local area. nowadays we don't distinguish WAN and LAN. Just call it Netwoking.

##Protocols

-Protocol is promise between machine to communicate.

Usually TCP/IP

###Ithernet

Networking using protocol CMSA/CD

ramdomly send line. if collision occur, do it again after random time.

collision over 15, fail.

###Token ring

only Machine with token can send line. else wating for token.

too slow. we don't use it.

##Cables

FL, UTP used.

##MAC address

Physical address.

Using IP, broadcast -> get MAC -> actual communication.

48 bits. Bender + Serial.

##Broadcast, Unicast, Muticast

Broadcast : to every machine in network, Work even if don't know MAC. long loading.

Unicast : to specific machine. Must know its MAC. ignore if wrong MAC.

Multicast : multiple Unicast

##OSI 7 Layers.

Application

Presentation

Session

Transport : TCP, UDP, control error

Network : very important, router

Data Link : 'Frame' Bridge, switch

Physical :Cable, repeater, hub
